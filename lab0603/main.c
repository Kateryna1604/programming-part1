#include <stdio.h>
#include "callbacks.h"

void print_i(int i) {
    printf("%d\n", i);
}

void print_square(int i) {
    printf("%d^2 = %d\n", i, i * i);
}

typedef int (*PredicateInt)(int);

static PredicateInt g_pred = NULL;
static ActionInt g_act = NULL;

static void act_if_pred(int i) {
    if (g_pred && g_pred(i)) {
        g_act(i);
    }
}

int is_even(int x) {
    return x % 2 == 0;
}

void print_even(int x) {
    printf("even: %d\n", x);
}

int main(void) {
    puts("for_range(1, 3, print_i):");
    for_range(1, 3, print_i);

    puts("\nfor_range(2, 5, print_square):");
    for_range(2, 5, print_square);

    puts("\nPredicate idea (only even numbers):");
    g_pred = is_even;
    g_act = print_even;
    for_range(1, 6, act_if_pred);

    puts("\nEdge cases (no output expected):");
    for_range(5, 3, print_i);
    for_range(1, 3, NULL);

    return 0;
}