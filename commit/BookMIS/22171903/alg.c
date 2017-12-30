#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alg.h"



void bputs(book* p)
{
    printf("%s\t%s\t%s\t%lf\n", p->nam, p->aut, p->isbn, p->pri);
}


book* load()
{
    book* p, *pi;
    book head;
    FILE* fp;
    char a[100];
    head.next = NULL;
    pi = &head;
    fp = fopen("book.csv", "r");
    if (fp == NULL)
    {
        printf("error\n");
    }
    while (fgets(a, 100, fp) != NULL)
    {
        p = (book*)malloc(sizeof(book));
        sscanf(a,"%s%s%s%lf", p->nam, p->aut, p->isbn, &p->pri);
        p->next = NULL;
        pi->next = p;
        pi = p;
    }
    fclose(fp);
    return head.next;
}


void searchnam(book* head)
{
    book* p = head;
    int i, j, k, n;
    char name[50];
    k = n = 0;
    printf("# 输入书名!注意!空格用”-“代替 #：");
    scanf("%s", name);
    do
    {
        for (i = 0; i < strlen(p->nam); )
        {
            for (j = 0; j < strlen(name); j++)
            {
               	if (p->nam[i] == name[j])
                {
                    i++;
                    n++;
                }
                else
              	{
                    break;
             	}
            }
            if (n >= strlen(name))
            {
                bputs(p);
                k++;
            	break;
            }
            i = i + n + 1;
        }
        n = 0;
        p = p->next;
    }
    while (p != NULL);
    if (k == 0)
        printf("!!! 未找到 !!!\n");
}


void searchaut(book* head)
{
    book* p = head;
    int n = 0;
    char auth[20];
    printf("# 输入作者 !注意!空格用”-“代替 # ：");
    scanf("%s", auth);
    do
    {
    	if (strcmp(p->aut, auth) == 0)
    	{
	    bputs(p);
	    n++;
    	}
	p = p->next;
    }
    while (p != NULL);
    if (n == 0)
	printf("!!! 未找到 !!!\n");
}


book* searchisbn(book* p, char* isbn)
{
    do
    {
    	if (strcmp(p->isbn, isbn) == 0)
    	{
    	    return p;
    	}
	p = p->next;
    }
    while (p != NULL);
    return NULL;
}


book* update(book* head)
{
    book* p = head;
    book* pi;
    char isbn[8];
    printf("# 输入要更改的ISBN #：");
    scanf("%s", isbn);
    pi = searchisbn(p, isbn);
    if (pi == NULL)
	printf("!!! 未找到 !!!\n");
    else 
    {
	printf("======更新图书信息======\n");
    	printf("# 书名 #：");
    	scanf("%s", pi->nam);
    	printf("# 作者 #：");
    	scanf("%s", pi->aut);
    	printf("# 价格 #：");
    	scanf("%lf", &pi->pri);
    }
    return head;
}


book* insert(book* head)
{
    book* pp,* h;
    int o;
    char isbn[8];
    h = head;
    printf("======插入图书信息======\n");
    printf("# ISBN #：");
    scanf("%s", isbn);
    pp = searchisbn(h, isbn);
    if (pp == NULL)
    {
	book* p = (book*)malloc(sizeof(book));
	strcpy(p->isbn, isbn);
    	printf("# 书名 #：");
    	scanf("%s", p->nam);
    	printf("# 作者 #：");
    	scanf("%s", p->aut);
    	printf("# 价格 #：");
    	scanf("%lf", &p->pri);
    	p->next = head;
    	head = p;
    }
    else
    {
	printf("!! 已存在，更改信息按1，退出按2 !!：");
        scanf("%d", &o);
        if (o == 1)
	{
	    printf("# 书名 #：");
            scanf("%s", pp->nam);
            printf("# 作者 #：");
            scanf("%s", pp->aut);
            printf("# 价格 #：");
            scanf("%lf", &pp->pri);
	}
    }
    return head;
}


book* delete(book* head)
{
    book* p, *pi;
    char isbn[8];
    pi = head;
    printf("# 输入ISBN #：");
    scanf("%s", isbn);
    p = searchisbn(pi, isbn);
    if (p == NULL)
	printf("!!! 未找到 !!!\n");
    else
    {
	while (pi->next != p)
     	{
	    pi = pi->next;
    	}
    	pi->next = p->next;
    	p->next = NULL;
    }
    return head;
}


void list(book* head)
{
    book* p = head;
    do
    {
     	bputs(p); 
        p = p->next;
    }
    while (p != NULL);
}


void report(book* head)
{
    int i, n, m;
    i = n = m = 0;
    book* p = head;
    while (p != NULL)
    { 
  	i++;
	p = p->next;
    }
    printf("@  图书数目：%d\n", i);


    p = head;
    book* pi;
    book* pp;
    do
    {
	pi = head;
	do
	{
	    if (strcmp(p->aut, pi->aut) == 0)
	    {
		n++;
	    }
	    pi = pi->next; 
	}
	while (pi != NULL);
	if (n > m)
	{
	    m = n;
    	    pp = p;
	}
    	p = p->next;
	n = 0;
    }
    while (p != NULL);
    printf("@  图书本数最多的作者：%s\n", pp->aut);

 
    p = head;
    n = i;
    while (p->next != NULL)
    {
	pi = p->next;
	do
	{
	    if (strcmp(p->aut, pi->aut) == 0)
	    {
		n--;
	 	break;
	    }
 	    pi = pi->next;
	}
	while (pi != NULL);
        p = p->next;
    }
    printf("@  作者个数：%d\n", n);
    

    double a;
    p = head;
    a = p->pri;
    do
    {
 	if (p->pri > a)
	    a = p->pri;
    	p = p->next;
    }
    while (p != NULL);
    printf("@  图书最高单价为：%lf\n", a);


    p = head;
    a = p->pri;
    do
    {
	if (p->pri < a)
	    a = p->pri;
    	p = p->next;
    }
    while (p != NULL);
    printf("@  图书最低单价为：%lf\n", a);
}


int save(book* head)
{
    book* p = head;
    FILE* fp;
    fp = fopen("book.csv", "w");
    if (fp == NULL)
    {
	return -1;
    }
    do
    {
 	fprintf(fp, "%s\t", p->nam);
	fprintf(fp, "%s\t", p->aut);
	fprintf(fp, "%s\t", p->isbn);
	fprintf(fp, "%lf\n", p->pri);
      	p = p->next;
    }
    while (p != NULL);
    fclose(fp);
    return 0;
}
