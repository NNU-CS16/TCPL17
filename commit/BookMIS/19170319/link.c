#include <stdio.h>
#include <stdlib.h>
#include "function.h"
struct book *link(struct book *head)
{
    FILE *fp = fopen("book.csv","r");
    if (fp == NULL)
    {
        printf("Can't be open!");
        exit(1);
    }
    head=(struct book *)malloc(sizeof(struct book));
    struct book *p=head;
    p->next=NULL;
    while(!feof(fp))
    {
        struct book *newp=(struct book *)malloc(sizeof(struct book));
        fscanf(fp,"%s%s%s%lf",newp->bname,newp->aname,newp->isbn,&newp->price);
        if(feof(fp))
        {
            fclose(fp);
            p->next=NULL;
            head=head->next;
            return head;
        }
        p->next=newp;
        p=newp;
        p->next=NULL;
    }
}
