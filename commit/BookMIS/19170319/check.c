#include <stdio.h>
#include <stdlib.h>
#include "function.h"
void check(struct book *head)
{
    struct book *p = head;
    while (p != NULL)
    {
        printf("%s %s %s %lf \n",p->bname,p->aname,p->isbn,p->price);
        p = p->next;
    }
}

