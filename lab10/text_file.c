#include "component.h"

void createTextFile() {
    FILE *f = fopen(TEXT_FILE, "w");
    if (!f) {
        perror("File open error");
        return;
    }

    int n;
    struct Component c;

    printf("Enter number of components: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nComponent ID: ");
        scanf("%d", &c.id);
        printf("Type (CPU/GPU/RAM): ");
        scanf("%s", c.type);
        printf("Manufacturer: ");
        scanf("%s", c.manufacturer);
        printf("Price: ");
        scanf("%f", &c.price);

        fprintf(f, "%d %s %s %.2f\n",
                c.id, c.type, c.manufacturer, c.price);
    }

    fclose(f);
}

void printTextFile() {
    FILE *f = fopen(TEXT_FILE, "r");
    if (!f) {
        perror("File open error");
        return;
    }

    struct Component c;
    printf("\n--- TEXT FILE CONTENT ---\n");

    while (fscanf(f, "%d %s %s %f",
                  &c.id, c.type, c.manufacturer, &c.price) == 4) {
        printf("%d | %s | %s | %.2f\n",
               c.id, c.type, c.manufacturer, c.price);
    }

    fclose(f);
}

void searchByTypeText() {
    FILE *f = fopen(TEXT_FILE, "r");
    if (!f) return;

    char key[10];
    struct Component c;

    printf("Enter component type: ");
    scanf("%s", key);

    while (fscanf(f, "%d %s %s %f",
                  &c.id, c.type, c.manufacturer, &c.price) == 4) {
        if (strcmp(c.type, key) == 0) {
            printf("%d %s %s %.2f\n",
                   c.id, c.type, c.manufacturer, c.price);
        }
    }

    fclose(f);
}

void searchByPriceText() {
    FILE *f = fopen(TEXT_FILE, "r");
    if (!f) return;

    float min, max;
    struct Component c;

    printf("Enter minimum price: ");
    scanf("%f", &min);
    printf("Enter maximum price: ");
    scanf("%f", &max);

    while (fscanf(f, "%d %s %s %f",
                  &c.id, c.type, c.manufacturer, &c.price) == 4) {
        if (c.price >= min && c.price <= max) {
            printf("%d %s %s %.2f\n",
                   c.id, c.type, c.manufacturer, c.price);
        }
    }

    fclose(f);
}

void deleteOldText() {
    FILE *f = fopen(TEXT_FILE, "r");
    FILE *temp = fopen("temp.txt", "w");

    float minPrice;
    struct Component c;

    printf("Enter minimum allowed price: ");
    scanf("%f", &minPrice);

    while (fscanf(f, "%d %s %s %f",
                  &c.id, c.type, c.manufacturer, &c.price) == 4) {
        if (c.price >= minPrice) {
            fprintf(temp, "%d %s %s %.2f\n",
                    c.id, c.type, c.manufacturer, c.price);
        }
    }

    fclose(f);
    fclose(temp);

    remove(TEXT_FILE);
    rename("temp.txt", TEXT_FILE);
}

void appendText() {
    FILE *f = fopen(TEXT_FILE, "a");
    if (!f) return;

    struct Component c;

    printf("Component ID: ");
    scanf("%d", &c.id);
    printf("Type: ");
    scanf("%s", c.type);
    printf("Manufacturer: ");
    scanf("%s", c.manufacturer);
    printf("Price: ");
    scanf("%f", &c.price);

    fprintf(f, "%d %s %s %.2f\n",
            c.id, c.type, c.manufacturer, c.price);

    fclose(f);
}
