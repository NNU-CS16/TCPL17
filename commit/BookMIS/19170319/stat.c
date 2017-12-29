#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
#define MAX 100000
struct author
{
    char aname[21];
    int num;
    struct author *next;
};
void stat(struct book *head)
{
    struct book *p = head;
    int i=0;
    double max = 0.0,min = 1000.0;
    while (p != NULL)
    {
        i++;
        if (p->price >= max)
            max = p->price;
        if (p->price <= min)
            min = p->price;
        p = p->next;
    }
    printf("共有图书：%d本\n",i);
    struct book *q = head;
    printf("价格最高的书是：\n");
    while (q != NULL)
    {
        if (q->price == max)
            printf("%s %s %s %lf\n",q->bname,q->aname,q->isbn,q->price);
        q = q->next;
    }
    struct book *t = head;
    printf("价格最低的书是：\n");
    while (t != NULL)
    {
        if (t->price == min)
            printf("%s %s %s %lf\n",t->bname,t->aname,t->isbn,t->price);
            t = t->next;

    }
    int n,m;
    n = 0;m = 0;
    struct book *x = head;
    struct book *pi;
    struct book *pp;
    do
    {
        pi = head;
        do
        {
            if (strcmp(x->aname,pi->aname) == 0)
            {
                n++;
            }
            pi = pi->next; 
        }
        while (pi != NULL);
        if (n > m)
        {
            m = n;
            pp = x;
        }
        x = x->next;
        n = 0;
    }
    while (x != NULL);
    printf("拥有最多本书的作者是：%s\n",pp->aname);
    x = head;
    n = i;
    while (x->next != NULL)
    {
        pi = x->next;
        do
        {
            if (strcmp(x->aname, pi->aname) == 0)
            {
                n--;
                break;
            }
            pi = pi->next;
        }
        while (pi != NULL);
        x = x->next;
    }
    printf("作者个数：%d\n", n);
}
