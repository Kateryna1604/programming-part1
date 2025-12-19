#include "component.h"

void createBinaryFile() {
    FILE *f = fopen(BIN_FILE, "wb");
    if (!f) return;

    int n;
    struct Component c;

    printf("Enter number of components: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("ID Type Manufacturer Price: ");
        scanf("%d %s %s %f",
              &c.id, c.type, c.manufacturer, &c.price);
        fwrite(&c, sizeof(c), 1, f);
    }

    fclose(f);
}

void printBinaryFile() {
    FILE *f = fopen(BIN_FILE, "rb");
    if (!f) return;

    struct Component c;
    printf("\n--- BINARY FILE CONTENT ---\n");

    while (fread(&c, sizeof(c), 1, f)) {
        printf("%d | %s | %s | %.2f\n",
               c.id, c.type, c.manufacturer, c.price);
    }

    fclose(f);
}

void searchByTypeBinary() {
    FILE *f = fopen(BIN_FILE, "rb");
    if (!f) return;

    char key[10];
    struct Component c;

    printf("Enter component type: ");
    scanf("%s", key);

    while (fread(&c, sizeof(c), 1, f)) {
        if (strcmp(c.type, key) == 0) {
            printf("%d %s %s %.2f\n",
                   c.id, c.type, c.manufacturer, c.price);
        }
    }

    fclose(f);
}

void searchByPriceBinary() {
    FILE *f = fopen(BIN_FILE, "rb");
    if (!f) return;

    float min, max;
    struct Component c;

    printf("Enter minimum price: ");
    scanf("%f", &min);
    printf("Enter maximum price: ");
    scanf("%f", &max);

    while (fread(&c, sizeof(c), 1, f)) {
        if (c.price >= min && c.price <= max) {
            printf("%d %s %s %.2f\n",
                   c.id, c.type, c.manufacturer, c.price);
        }
    }

    fclose(f);
}

void deleteOldBinary() {
    FILE *f = fopen(BIN_FILE, "rb");
    FILE *temp = fopen("temp.bin", "wb");

    float minPrice;
    struct Component c;

    printf("Enter minimum allowed price: ");
    scanf("%f", &minPrice);

    while (fread(&c, sizeof(c), 1, f)) {
        if (c.price >= minPrice) {
            fwrite(&c, sizeof(c), 1, temp);
        }
    }

    fclose(f);
    fclose(temp);

    remove(BIN_FILE);
    rename("temp.bin", BIN_FILE);
}

void appendBinary() {
    FILE *f = fopen(BIN_FILE, "ab");
    if (!f) return;

    struct Component c;

    printf("ID Type Manufacturer Price: ");
    scanf("%d %s %s %f",
          &c.id, c.type, c.manufacturer, &c.price);

    fwrite(&c, sizeof(c), 1, f);
    fclose(f);
}
