#include<stdio.h>
#include<stdlib.h>
#include"Book.h"

void Search(struct book *p)
//struct book
//{
//char Bname[50];
//char Author[20];
//char ISBN[8];
//double Price;
//struct book *next;
//};

//int main()
{
	int i;
	printf("(1)search by bookname\n(2)search by author\n(3)search by number\n");	
	scanf("%d", &i);
	if (i == 1)
	{
		char arr[51];
		scanf("%s", arr);
		while (p != NULL)
		{
			if (strstr(p->Bname, arr) != NULL)
			printf("%s\n%s\n%s\n%lf\n", p->Bname, p->Author, p->ISBN, p->Price);
			p = p->next;
		}
	}
	else if (i == 2)
	{
		char arr[21];
		scanf("%s",arr);
		while (p != NULL)
			{
			if (strcmp(p->Author, arr) == 0)
			printf("%s\n%s\n%s\n%lf\n", p->Bname, p->Author, p->ISBN, p->Price);
			p = p->next;
			}	
	}
		else
			{
			char arr[9];
			scanf("%s",arr);
			while (p != NULL)
			{
				if (strcmp(p->ISBN, arr) == 0)
				{
				printf("%s\n%s\n%s\n%lf\n", p->Bname, p->Author, p->ISBN, p->Price);		
				break;
				}
				p = p->next;
			}
			}
}
