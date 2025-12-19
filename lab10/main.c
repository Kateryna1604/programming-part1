#include "component.h"

int main() {
    int choice;

    do {
        printf("\n--- MAIN MENU ---\n");
        printf("1  - Create TEXT file\n");
        printf("2  - Print TEXT file\n");
        printf("3  - Search TEXT by type\n");
        printf("4  - Search TEXT by price range\n");
        printf("5  - Delete TEXT outdated components\n");
        printf("6  - Append to TEXT file\n");
        printf("7  - Create BINARY file\n");
        printf("8  - Print BINARY file\n");
        printf("9  - Search BINARY by type\n");
        printf("10 - Search BINARY by price range\n");
        printf("11 - Delete BINARY outdated components\n");
        printf("12 - Append to BINARY file\n");
        printf("0  - Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1: createTextFile(); break;
            case 2: printTextFile(); break;
            case 3: searchByTypeText(); break;
            case 4: searchByPriceText(); break;
            case 5: deleteOldText(); break;
            case 6: appendText(); break;
            case 7: createBinaryFile(); break;
            case 8: printBinaryFile(); break;
            case 9: searchByTypeBinary(); break;
            case 10: searchByPriceBinary(); break;
            case 11: deleteOldBinary(); break;
            case 12: appendBinary(); break;
        }

    } while (choice != 0);

    return 0;
}
