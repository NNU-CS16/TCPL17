#ifndef CMD_H
#define CMD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct book
{
    char name[20];
    char writer[20];
    char ISBN[9];
    float price;
};

typedef struct book Book;

Book Bookarr[MAX];

int Save(Book *Bookarr, int size, char *filename);
int Loadarr(Book *Bookarr, char *filename);
void Present(Book *Bookarr, int size);
int Add(Book *Bookarr, int *psize);
Book *Change(Book *Bookarr, int size, char *pISBN);
int Delete(Book *Bookarr, int *psize, char *pISBN);
Book *Search(Book *Bookarr, int size, char *str);
int Reference(Book *Bookarr, int size);

#endif
