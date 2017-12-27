#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"
struct book
{
    char name[50];
    char ISBN[8];
    char author[50];
    double price;
    int num[10];
    struct book *next;
};

struct book *save(struct book *head)
{
    struct book *p;
    p=head;
    FILE *fp;
    fp=fopen("book.csv","w");
    if(fp=NULL)
    {
        return -1;
    }
    while(p!=NULL)
    {
        fprintf(fp,"%s\t",p->ISBN);
        fprintf(fp,"%s\t",p->name);
        fprintf(fp,"%s\t",p->author);
        fprintf(fp,"%f\t",p->price);
        p=p->next;
     }
    fclose(fp);
    return 0;
}
