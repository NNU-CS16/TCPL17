#include <stdio.h>
#include <math.h>
struct book
{
    char name[50];
    char author[20];
    char ISBN[8];
    double price;
    struct book *next;
};
void search(struct book *head);
struct book* add(struct book *p);
struct book* deleted(struct book *p);
struct book* update(struct book *p);
void listall(struct book *p);
void report(struct book *p);
struct book* read();
struct book *docsv(struct book *head);

