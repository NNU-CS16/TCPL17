#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct book
{
    char book_name[50];
    char author[20];
    char ISBN[8];
    double price;
    struct book* next;
}book;

void menu();
void search();
void add();
void delete();
void display();
void statistics();
void modify();
book* read();
