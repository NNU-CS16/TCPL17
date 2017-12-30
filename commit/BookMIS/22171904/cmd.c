#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cmd.h"

void BookPuts(book* p)
{
	printf("%s\t%s\t%s\t%lf\n",p->title,p->author,p->ISBN,p->price);
}

book* Load()
{
	book* p,*pi;
	book head;
	head.next=NULL;
	pi=&head;
	FILE* fp;
	char b[100];
	fp=fopen("Book.csv","r");
	if(fp==NULL)
	{
		printf("Error!\n");
	}
	while(fgets(b,100,fp)!=NULL)
	{
		p=(book*)malloc(sizeof(book));
		sscanf(b,"%s%s%s%lf",p->title,p->author,p->ISBN,&p->price);
		p->next=NULL;
		pi->next=p;
		pi=p;
	}
	return head.next;
}

void Searchtitle(book* head)
{
	book* p=head;
	int i,j;
	int k=0,n=0;
	char title[50];
	printf("Please input the title of the book:");
	scanf("%s",title);
	do
	{
		for(i=0;i<strlen(p->title); )
		{
			for(j=0;j<strlen(title);j++)
			{
				if(p->title[i]==title[j])
				{
					i++;
					n++;
				}
				else
				{
					break;
				}
			}
			if(n>=strlen(title))
			{
				BookPuts(p);
				k++;
				break;
			}
			i=i+n+1;
		}
		n=0;
		p=p->next;
	}while(p!=NULL);
	if(k==0)
		printf("Can not find!!!\n");
}

void Searchauthor(book* head)
{
	book* p=head;
	int n=0;
	char author[20];
	printf("Please input the author of the book:");
	scanf("%s",author);
	do
	{
		if(strcmp(p->author,author)==0)
		{
			BookPuts(p);
			n++;
		}
		p=p->next;
	}while(p!=NULL);
	if(n==0)
		printf("Can not find!!!\n");
}

book* SearchISBN(book* p,char* ISBN)
{
	do
	{
		if(strcmp(p->ISBN,ISBN)==0)
		{
			return p;
		}
		p=p->next;
	}while(p!=NULL);
	return NULL;
}

book* Update(book* head)
{
	book* p=head;
	book* pi;
	char ISBN[8];
	printf("& Please the change of ISBN &:");
	scanf("%s",ISBN);
	pi=SearchISBN(p,ISBN);
	if(pi==NULL)
		printf("Can not find!!!\n");
	else
	{
		printf("=======更新图书信息=======\n");
		printf("& The title of the book &:");
		scanf("%s",p->title);
		printf("& The author of the book &:");
		scanf("%s",p->author);
		printf("& The price of the book &:");
		scanf("%lf",&p->price);
	}
	return head;
}

book* Add(book*head)
{
	book* p=(book*)malloc(sizeof(book));
	book* pi,*pp;
	book* h=head;
	int m;
	char ISBN[8];
	printf("=======插入图书信息======\n");
	printf("& ISBN &:");
	scanf("%s",ISBN);
	pp=SearchISBN(h,ISBN);
	if(pp==NULL)
	{
		strcpy(p->ISBN,ISBN);
		printf("& The title of the the boook &:");
        scanf("%s",p->title);
		printf("& The author of the book &:");
		scanf("%s",p->author);
		printf("& The price of the book &:\n");
		scanf("%lf",&p->price);
		p->next=head;
		head=p;
	}
	else
	{
		printf("Added,change information by 1,exit by 0:");
		scanf("%d",&m);
		if(m==1)
		{
			printf("& The title of the book &:");
			scanf("%s",pp->title);
			printf("& The author of the book &:");
			scanf("%s",pp->author);
			printf("& The price of the book &:");
			scanf("%lf",&pp->price);
		}
		else
		{
			return head;
		}
	}
	return head;
}

book* Delete(book* head)
{
	book* p,*pi;
	pi=head;
	char ISBN[8];
	printf("& Please input the ISBN &:");
	scanf("%s",ISBN);
	p=SearchISBN(pi,ISBN);
	if(p==NULL)
		printf("Can not find!!!\n");
	else
	{
		pi=head;
		while(pi->next !=p)
		{
			pi=pi->next;
		}
		pi->next=p->next;
		p->next=NULL;
	}
	return head;
}

void List(book* head)
{
	book* p=head;
	do
	{
		BookPuts(p);
		p=p->next;
	}while(p!=NULL);
}

void Report(book* head)
{
	int i,n,m;
	i=n=m=0;
	book* p=head;
	while(p!=NULL)
	{
		i++;
		p=p->next;
	}
	printf("# The number of books:%d",i);

	p=head;
	book* pi;
	book* pp;
	do
	{
		pi=head;
		do
		{
			if(strcmp(p->author,pi->author)==0)
			{
				n++;
			}
			pi=pi->next;
		}while(p!=NULL);
		if(n>m)
		{
			m=n;
			pp=p;
		}
		p=p->next;
		n=0;
	}while(p!=NULL);
	printf("# The writer with the largeest number of books:%s\n",pp->author);

	p=head;
	n=i;
	while(p->next!=NULL)
	{
		pi=p->next;
		do
		{
			if(strcmp(p->author,pi->author)==0)
			{
				n--;
				break;
			}
			pi=pi->next;
		}while(p!=NULL);
		p=p->next;
	}
		printf("# The number of the writers:%d\n",n);

		double b1,b2;
		p=head;
		b1=p->price;
		do
		{
			if(p->price>b1)
			
				b1=p->price;
			p=p->next;
			
		}while(p!=NULL);
		printf("# The highest unit price of books:%lf\n",b1);

		p=head;
		b2=p->price;
		do
		{
			if(p->price<b2)
				b2=p->price;
			p=p->next;
		}while(p!=NULL);
		printf("# The lowest unit price of books:%lf\n",b2);
	}


int Save(book* head)
{
	book* p=head;
	FILE* fp;
	fp=fopen("Book.csv","w");
	if(fp==NULL)
	{
		return -1;
	}
	do
	{
		fprintf(fp,"%s\t",p->title);
		fprintf(fp,"%s\t",p->author);
		fprintf(fp,"%s\t",p->ISBN);
		fprintf(fp,"%lf\n",p->price);
		p=p->next;
	}while(p!=NULL);
	fclose(fp);
	return 0;
}
