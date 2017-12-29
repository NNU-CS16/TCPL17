#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
struct book *del(struct book *head)
{
    char temp[9];
    printf("请输入你所要删除的项的ISBN：\n");
    scanf("%s",temp);
    struct book *p = head;
    struct book *prev = NULL;
    if (strcmp(p->isbn,temp) != 0)
    {
        while (strcmp(p->isbn,temp) != 0)
        {
            prev = p;
            p = p->next;
        }
        prev->next = p->next;
        p->next = NULL;
        free(p);
        p = NULL;
        printf("成功！\n");
    }
    else
    {
        head = head->next;
        free(p);
        p = NULL;
        printf("成功！\n");
    }
    return head;
}

