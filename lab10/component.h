#ifndef COMPONENT_H
#define COMPONENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEXT_FILE "components.txt"
#define BIN_FILE  "components.bin"

struct Component {
    int id;
    char type[10];
    char manufacturer[30];
    float price;
};

void createTextFile();
void printTextFile();
void searchByTypeText();
void searchByPriceText();
void deleteOldText();
void appendText();

void createBinaryFile();
void printBinaryFile();
void searchByTypeBinary();
void searchByPriceBinary();
void deleteOldBinary();
void appendBinary();

#endif
