#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alg.h"

void search(struct Node *head)
{
	int k,j;
	char s[50];
	struct Node *p = head;
	printf("1....书名\n");
	printf("2....作者\n");
	printf("3....ISBN\n");
    printf("请输入查询方式:");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			printf("请输入书名:");
			scanf("%s",s);
			while (p != NULL)
			{
				j = strcmp(s, p -> name);
				if (j == 0)
					printf("%s %s %lf\n", p -> name, p -> writer, p -> ISBN, p -> price),
					p = NULL;
				else
					p = p -> next;
			}
			break;
		case 2:
			printf("请输入作者:");
			scanf("%s",s);
			while (p != NULL)
			{
				j = strcmp(s, p -> writer);
				if (j == 0)
					printf("%s %s %lf\n", p -> name, p -> writer, p ->ISBN, p -> price),
					p = p -> next;
				else
					p = p -> next;
			}
			break;
		case 3:
			printf("请输入ISBN:");
			scanf("%s",s);
			while (p != NULL)
			{
				j = strcmp(s, p -> ISBN);
				if (j == 0)
					printf("%s %s %lf\n",p -> name, p -> writer, p -> ISBN, p ->price),
					p = NULL;
				else
					p = p -> next;
			}
		}
}
struct Node *add(struct Node *head)
{
	struct Node *newp;
	struct Node *prev;
	newp = (struct Node *)malloc(sizeof(struct Node));
	printf("请输入书名:");
	scanf("%s",newp -> name);
	printf("请输入作者:");
	scanf("%s",newp -> writer);
	printf("请输入ISBN:");
	scanf("%s",newp -> ISBN);
	printf("请输入价格:");
	scanf("%lf",&newp -> price);
	int k;
	struct Node *q;
	prev = NULL;
	q = head;
	while (q != NULL)
	{
		k = strcmp(q -> name, newp -> name);
		if (k > 0)
			break;
		prev = q; q = q -> next;
	}
	newp -> next = q;
	if (q == head)
		head = newp;
	else
		prev -> next = newp;
	return head;
}

struct Node *update(struct Node *head)
{
	char ISBN[8];
	printf("请输入要修改的图书的ISBN:");
	scanf("%s",ISBN);
	int j;
	struct Node *p;
	struct Node *q;
	p = head;
    while (p != NULL)
    {
	   	j = strcmp(ISBN, p -> ISBN);
        if (j == 0)
		 	break;
        else
            p = p -> next;
    }
	if (p == NULL)
		printf("未找到!");
	else
	{
		printf("请输入要修改的信息:\n");
		printf("书名:");
		scanf("%s",p -> name);
		printf("作者:");
		scanf("%s",p -> writer);
		printf("价格:");
		scanf("%lf",&p -> price);
	}
	return head;
}

struct Node *delete(struct Node *head)
{
	char ISBN[8];
	int j;
	struct Node *p;
	struct Node *prev;
	prev = NULL;
	p = head;
	printf("请输入要删除的书的ISBN:");
	scanf("%s",ISBN);
	while (p != NULL)
	{
		j = strcmp(ISBN, p -> ISBN);
		if (j == 0)
			break;
		else
			prev = p; p = p -> next;
	}
	if (p == NULL)
		printf("未找到！\n");
	else if (p == head)
		head = head -> next;
	else
		prev -> next = p -> next;
	free(p);
	return head;
}

void output(struct Node *head)
{
	struct Node *p;
	p = head;
	while (p != NULL)
	{
		printf("%s %s %s %lf\n",p -> name, p -> writer, p -> ISBN, p -> price);
		p = p -> next;
	}
}

struct Node *load()
{
	struct Node *head;
	head = (struct Node *)malloc(sizeof(struct Node));
	char name[50];
	char writer[20];
	char ISBN[8];
	double price;
	struct Node *q = head;
	struct Node *p = head;
	p -> next = NULL;
	FILE* fp = fopen("books.csv","r");
	if (fp == NULL)
	{
		printf("打开文件失败!");
		exit(1); 
	}
	while(fscanf (fp,"%s %s %s %lf", name, writer, ISBN, &price) != EOF)
	{
		q = (struct Node *)malloc(sizeof(struct Node));
		strcpy(q -> name, name);
		strcpy(q -> writer, writer);
		strcpy(q -> ISBN, ISBN);
		q -> price = price;
		p -> next = q;
		p = q;
	}
	p -> next = NULL;
	fclose(fp);
	return head -> next;
}

struct Node *save(struct Node *head)
{
	struct Node *p;
	p = head;
	FILE *fp;
	fp = fopen("books.csv", "w");
	if (fp == NULL)
	{
		printf("无法保存文件！");
		exit(1);
	}
	while (p != NULL)
	{
		fprintf(fp, "%s\t", p -> name);
		fprintf(fp, "%s\t", p -> writer);
		fprintf(fp, "%s\t", p -> ISBN);
		fprintf(fp, "%lf\n", p -> price);
		p = p -> next;
	}
	fclose(fp);
	return 0;
}

void report(struct Node *head)
{
	int count = 0;
	struct Node *p = head;
	struct Node *q = head;
	struct Node *p1, *p2, *p3, *p4;
	while (p != NULL)
	{
		count++;
		p = p -> next;
	}
	printf("图书总数为%d\n",count);
	p1 = q -> next;
	p3 = q -> next;
	while (p1 != NULL && q != NULL)
	{
		if (q -> price < p1 -> price)
		{		
			p2 = p1;
			q = q -> next;
		}
		else
		{
			p2 = q;
			p1 = p1 -> next;
		}
	}
	printf("价格最高为:%lf	书名:%s\n", p2 -> price, p2 -> name);
	while (p3 != NULL && q != NULL)
	{
		if (q -> price > p3 -> price)
		{
			p4 = p3;
			q = q -> next;
		}
		else
		{
			p4 = p;
			p3 = p3 -> next;
		}
	}
	printf("价格最低为:%lf	书名:%s\n", p4 -> price, p4 -> name);
}
			
			
