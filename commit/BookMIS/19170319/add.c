#include <stdio.h>
#include <stdlib.h>
#include "function.h"
struct book *add(struct book *head)
{
    struct book *p = head;
    FILE *fp = fopen("book.csv","aw");
    while (p->next !=NULL)
    {
        p = p->next;
    }
    p = p->next = (struct book *)malloc(sizeof(struct book));
    scanf("%s%s%s%lf",p->bname,p->aname,p->isbn,&p->price);
    fprintf(fp,"%s    %s    %s    %lf",p->bname,p->aname,p->isbn,p->price);
    fclose(fp);
    p->next = NULL;
    return head;
}
