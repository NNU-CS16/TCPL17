#ifndef _BOOK_H
#define _BOOK_H

#include <stdio.h>
#include <math.h>

struct book
{
char Bname[50];
char Author[20];
char ISBN[8];
double Price;
struct book *next;
};

struct book *load();
void Search(struct book *p);
void change(struct book *p);
struct book *add(struct book *p);
struct book *cut(struct book *p);
void paixu(struct book *head);
void report(struct book *p);
void keep(struct book *head);


#endif

