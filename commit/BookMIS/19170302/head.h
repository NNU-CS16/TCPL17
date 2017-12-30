#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
        char name[50];
        char writer[20];
        int ISBN;
        double price;
        struct book *next;
};

void search();
void keywordsearch();
void writersearch();
void ISBNsearch();
void update();
void insert();
void delete();
void print();
void report();
struct book* creat();

