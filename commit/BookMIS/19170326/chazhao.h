#ifndef CHAZHAO_H
#define CHAZHAO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find(char str[ ], char substr[ ]);

void cz_ISBN(struct Book *head, char ISBN[ ])
{
	int flag = 0;
	struct Book *p = head;
	while( p != NULL )
	{
		if( strcmp(p->ISBN, ISBN) == 0 )
		{
			flag = 1;
			printf("%s,%s,%s,%lf\n",p->bookname,p->author,p->ISBN,p->price);
		}
		p = p->next;
	}
	if( flag == 0 )
		printf("此ISBN不存在！\n");
}

void cz_author(struct Book *head, char author[ ])
{
	int flag = 0;
	struct Book *p = head;
	while( p != NULL )
	{
		if( strcmp(p->author, author) == 0)
		{
			flag = 1;
			printf("%s,%s,%s,%lf\n",p->bookname,p->author,p->ISBN,p->price);
		}
		p = p->next;
	}
	if( flag == 0 )
		printf("此作者不存在！\n");
}

void cz_bookname(struct Book *head, char bookname[ ])
{
	int flag = 0;
	struct Book *p = head;
	while( p != NULL )
	{
		if( find(p->bookname, bookname) == 1)
		{
			flag = 1;
			printf("%s,%s,%s,%lf\n",p->bookname,p->author,p->ISBN,p->price);
		}
		p = p->next;
	}
	if( flag == 0 )
		printf("此书不存在！\n");
}

int find(char str[ ], char substr[ ])
{
	int str_len = strlen(str);
	int substr_len = strlen(substr);
	int i = 0, j = 0;
	int count = 0, flag = 0;
	while( i < str_len )
	{
		if( str[i] == substr[j] )
		{
			count++;
			i++;
			j++;
			if( count == substr_len )
			{
				flag = 1;
				return 1;
			}
		}
		else
		{
			count = 0;
			j = 0;
			i++;
		}
	}
	if( flag == 0 )
		return -1;
}
#endif
