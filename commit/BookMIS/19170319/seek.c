#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
void seek(struct book *head)
{
    char c;
    struct book *p = head;
    char xuan[100];
    printf("    a:按书名;\n    b:按作者\n    c:按ISBN码\n");
    scanf(" %c",&c);
    switch (c)
    {
        case 'a':
            scanf("%s",xuan);
            while (p != NULL)
            {
                for (int i = 0;i <= 50;i++)
                {
                    if (p->bname[i] == xuan[i])
                        if (strncmp(xuan,p->bname+i,strlen(xuan)) == 0)
                        {
                            printf("%s %s %s %lf\n",p->bname,p->aname,p->isbn,p->price);
                            break;
                        }
                } 
                p = p->next;
            }
            break;
        case 'b':
            scanf("%s",xuan);
            while (p != NULL)
            {
                if (strcmp(p->aname,xuan) == 0)
                    printf("%s %s %s %lf\n",p->bname,p->aname,p->isbn,p->price);
                p = p->next;
            }
            break;
        case 'c':
            scanf("%s",xuan);
            while (p != NULL)
            {
                if (strcmp(p->isbn,xuan) == 0)
                    printf("%s %s %s %lf",p->bname,p->aname,p->isbn,p->price);
                p = p->next;
            }
            break;
        default :break;
    }
}
