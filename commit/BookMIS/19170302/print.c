#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void print()
{
        struct book *p=creat();
        printf("\n\n\n");
        printf("                                ***************图***************书**********************信******************息********************\n");
        printf("\n");
        printf("                                --------------------------------------------------------------------------------------------------\n");
        printf("\n");
        while(p!=NULL)
        {
                printf("                                 %-30s%-20s\t\t%d\t\t%lf\n",p->name,p->writer,p->ISBN,p->price);
                p=p->next;
        }
        printf("\n");
        printf("                                --------------------------------------------------------------------------------------------------\n");
        printf("\n\n\n");
}



