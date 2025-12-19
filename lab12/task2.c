#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define IN_FILE  "input.txt"
#define OUT_FILE "output.txt"

static void replace_malloc_with_calloc(const char *in, char *out, size_t out_cap);
static void convert_decimal_numbers_to_hex(const char *in, char *out, size_t out_cap);

static void process_line(const char *line, char *out, size_t out_cap)
{
    char tmp[4096];
    replace_malloc_with_calloc(line, tmp, sizeof(tmp));

    convert_decimal_numbers_to_hex(tmp, out, out_cap);
}

int main(void)
{
    FILE *fin = fopen(IN_FILE, "r");
    if (!fin) { perror("Cannot open input file"); return 1; }

    FILE *fout = fopen(OUT_FILE, "w");
    if (!fout) { perror("Cannot open output file"); fclose(fin); return 1; }

    char line[2048];
    char out[4096];

    while (fgets(line, sizeof(line), fin))
    {
        process_line(line, out, sizeof(out));
        fputs(out, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}

static void replace_malloc_with_calloc(const char *in, char *out, size_t out_cap)
{
    size_t oi = 0;

    for (size_t i = 0; in[i] != '\0'; )
    {
        if (in[i] == 'm' && in[i+1] == 'a' && in[i+2] == 'l' && in[i+3] == 'l' && in[i+4] == 'o' && in[i+5] == 'c')
        {
            size_t j = i + 6;
            while (in[j] == ' ' || in[j] == '\t') j++;

            if (in[j] == '(')
            {
                const char *rep = "calloc(";
                for (size_t k = 0; rep[k] && oi + 1 < out_cap; k++) out[oi++] = rep[k];

                const char *ins = "1, ";
                for (size_t k = 0; ins[k] && oi + 1 < out_cap; k++) out[oi++] = ins[k];

                i = j + 1;
                continue;
            }
        }

        if (oi + 1 < out_cap) out[oi++] = in[i];
        i++;
    }

    out[oi] = '\0';
}

static void convert_decimal_numbers_to_hex(const char *in, char *out, size_t out_cap)
{
    size_t oi = 0;

    for (size_t i = 0; in[i] != '\0'; )
    {
        int prev_is_ident = (i > 0) && (isalnum((unsigned char)in[i-1]) || in[i-1] == '_');

        if (isdigit((unsigned char)in[i]) && !prev_is_ident)
        {
            long val = 0;
            size_t j = i;
            while (isdigit((unsigned char)in[j]))
            {
                val = val * 10 + (in[j] - '0');
                j++;
            }

            if (oi + 2 < out_cap) { out[oi++] = '0'; out[oi++] = 'x'; }

            char buf[64];
            const char *digits = "0123456789ABCDEF";
            int bi = 0;

            if (val == 0) buf[bi++] = '0';
            else {
                unsigned long u = (unsigned long)val;
                char rev[64];
                int ri = 0;
                while (u > 0 && ri < (int)sizeof(rev)) {
                    rev[ri++] = digits[u % 16];
                    u /= 16;
                }
                while (ri > 0) buf[bi++] = rev[--ri];
            }
            buf[bi] = '\0';

            for (int k = 0; buf[k] && oi + 1 < out_cap; k++) out[oi++] = buf[k];

            i = j;
            continue;
        }

        if (oi + 1 < out_cap) out[oi++] = in[i];
        i++;
    }

    out[oi] = '\0';
}