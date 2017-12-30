#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct book
{
    char ISBN[9];
    char name[51];
    char author[21];
    double price;
    struct book *next;
}BOOK;
BOOK* Load();
void Search();
void Add();
BOOK* Modify();
BOOK* Delete();
void Show();

