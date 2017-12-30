#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
struct book *amend(struct book *head)
{
    struct book *p = head;
    char temp[9];
    printf("请输入你所要修改的项的IBSN：\n");
    scanf("%s",temp);
    while (p != NULL)
    {
        if (strcmp(p->isbn,temp) == 0)
        {
            printf("请输入修改后的信息：\n");
            scanf("%s %s %s %lf",p->bname,p->aname,p->isbn,&p->price);
            break;
        }
        p = p->next;
    }
    return head;
}
