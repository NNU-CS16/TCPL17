#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "a.h"
struct Book *creat()
{
    struct Book *head;
    head = (struct Book *)malloc(sizeof(struct Book));
    char Bname[50];
    char Wname[20];
    char ISBN[8];
    double Bprice;
    struct Book *p=head;
    struct Book *q=head;
    p -> next = NULL;
    FILE *fp = fopen("Booka.csv","r");
    if (fp == NULL)
    {
        printf("you failed");
        exit(1);
    }
    while (fscanf (fp,"%s %s %s %lf", Bname, Wname, ISBN, &Bprice) != EOF)
    {
        q = (struct Book *)malloc(sizeof(struct Book));
        strcpy(q->Bname,Bname);
		strcpy(q->Wname,Wname);
		strcpy(q->ISBN,ISBN);
		q->Bprice = Bprice;
		p->next = q;
		p = q;
	}
	p->next = NULL;
	fclose(fp);
	return head->next;
}

void search(struct Book *head)
{
	int n;
	printf("1...按照书名");
	printf("2...按照作者");
	printf("3...按照ISBN");
	printf("输入选择");
	scanf("%d",&n);
    char Bname[50];
    char Wname[20];
    char ISBN[8];
    struct Book *p=head;
    switch(n)
    {
        case 1:
        	scanf ("%s", Bname);
        	while (p != NULL)
        	{
            	if(strcmp(p->Bname,Bname)==0)
            		printf ("%s\t%s\t%s\n", p->Bname, p->Wname, p->ISBN),
            		p=NULL;
            	else p = p->next;
        	}
        	break;
        case 2:
        	scanf ("%s", Wname);
        	while (p != NULL)
        	{
            	if(strcmp(p->Wname,Wname)==0)
            		printf ("%s %s %s", p->Bname, p->Wname, p->ISBN),
            		p=NULL;
            	else p = p->next;
        	}
        	break;
		case 3:
			scanf("%s",ISBN);
			while (p != NULL)
			{
				if(strcmp(p->ISBN,ISBN)==0)
					printf ("%s\t%s\t%s\n", p->Bname, p->Wname, p->ISBN),p=NULL;
				else p = p->next;
			}
			break;
		}
}


struct Book *insert(struct Book *head)
{
    char Bname[50];
    char Wname[20];
    char ISBN[8];
    double Bprice;
	printf("shu ru ");
    scanf("%s%s%s%lf",Bname,Wname,ISBN,&Bprice);
	struct Book *newp;
	newp = (struct Book *)malloc(sizeof(struct Book));
    strcpy(newp->Bname,Bname);
    strcpy(newp->Wname,Wname);
    strcpy(newp->ISBN,ISBN);
    newp -> Bprice = Bprice;
    newp -> next = head;
    head = newp;
    return head;
}
struct Book *Delete(struct Book *head)
{
	char Bname[50];
	printf("输入\n");
	scanf("%s",Bname);
    struct Book *p,*prev;
    prev = NULL;
    p = head;
    while (p != NULL)
    {
        if(p->Bname == Bname)
            break;
        prev = p;
        p = p->next;
    }
    if (p==NULL)
     return head;
    if (p==head)
     head = head->next;
    else
     prev->next=p->next;
     free(p);
     return head;
}

struct Book *modification(struct Book *head)
{
	struct Book *p;
	int a;
	char isbn[8];
	printf("要修改的书的ISBN");
	scanf("%s",isbn);
	printf("1...修改名字");
	printf("2...修改作者");
	printf("3...修改价格");
	scanf("%d",&a);
	char name[50];
	char writter[20];
	double price;
	switch (a)
    {
    	case 1:
    		printf("Bname:");
    		scanf("%s",name);
    		while(p!=NULL)
    		{
        		if(strcmp(p->ISBN,isbn)==0)
        			strcpy(p->Bname,name),
        			printf("%s %s %s %lf",p->Bname,p->Wname,p->ISBN,p->Bprice),
        			p = NULL;
        		else p=p->next;
    		}
    		break;
    case 2:
    	printf("writter:");
    	scanf("%s",writter);
    	while(p!=NULL)
    	{
        	if(strcmp(p->ISBN,isbn)==0)
        	strcpy(p->Wname,writter),
        	printf("%s %s %s %lf",p->Bname,p->Wname,p->ISBN,p->Bprice),
        	p = NULL;
        	else p=p->next;
    	}
    	break;
    case 3:
    	printf("price:");
    	scanf("%lf",&price);
    	while(p!=NULL)
    	{
        	if(strcmp(p->ISBN,isbn)==0)
        	p->Bprice=price,
        	printf("%s %s %s %lf",p->Bname,p->Wname,p->ISBN,p->Bprice),
       		p = NULL;
        	else p=p->next;
    	}
    	break;
    }
	return head;

}

void output(struct Book *head)
{
     struct Book *p=head;
     while (p!=NULL)
     {
        printf("%s\t%s\t%s\t%lf\n",p->Bname, p->Wname, p->ISBN,p->Bprice);
        p=p->next;
     }
}



void baocun(struct Book *head)
{
    struct Book* p = head;
    FILE* fp;
    fp = fopen("book.csv", "w");
    if (fp == NULL)
    {
		printf("打开失败");
		exit(1);
    }
    do
    {
 	fprintf(fp, "%s,", p->Bname);
	fprintf(fp, "%s,", p->Wname);
	fprintf(fp, "%s,", p->ISBN);
	fprintf(fp, "%lf\n", p->Bprice);
      	p = p->next;
    }
    while (p != NULL);
    fclose(fp);
}
void analyse(struct Book *head)
{
	int i=0;
    int n =0;
    int m = 0;
    struct Book *p=head;
    struct Book *q,*newp;
    while (p != NULL)
    {
        i++;
        p = p->next;
    }
    printf ("the books have:%d",i);
    p = head;
    q = head;
    while (p != NULL)
    {
    while (q != NULL)
    {
        if (strcmp(p->Wname,q->Wname)==0)
         {
             n++;
         }
         q = q->next;
    }
    if (n > m)
    {
        m = n;
        newp = p;
    }
    p = p->next;
    n = 0;
    }
    printf ("tu shu zui duo de zuo zhe:%s\n",newp->Wname);
    p = head;
    n = i;
    while (p->next != NULL)
    {
        q = p->next;
        do
        {
            if (strcmp(p->Wname,q->Wname)==0)
 			{
                n --;
                break;
            }
            q = q->next;
        } while(q != NULL);
        p = p->next;
    }
    printf("zuo zhe you %d ge\n",n);
    double a;
    p = head;
    a = p->Bprice;
    while(p != NULL)
    {
        if(p->Bprice > a)
            a = p-> Bprice;
            p = p->next;
    }
    printf("zui gao dan jia:%lf\n",a);
    double b;
    p = head;
    a = p->Bprice;
    while (p!=NULL);
    {
        if(p->Bprice < b);
            b = p->Bprice;
            p = p->next;
    }
    printf("zui di dan jia wei:%lf\n",a);
}

