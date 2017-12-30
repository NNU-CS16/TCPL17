#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alg.h"

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
		q -> Bprice = Bprice;
        p -> next = q;
        p = q;
	}
    p -> next = NULL;
    fclose(fp);
    return head -> next;
}
void search(struct Book *head,int choi)
{
    char Bname[50];
    char Wname[20];
    char ISBN[8];
    struct Book *p=head;
    switch(choi)
	{
		case 1:
        scanf ("%s", Bname);
        while (p != NULL)
        {
			if(strcmp(p->Bname,Bname)==0)
            printf ("%s %s %s", p->Bname, p->Wname, p->ISBN),
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
        scanf ("%s", ISBN);
        while (p != NULL)
        {
            if(strcmp(p->ISBN,ISBN)==0)
            printf ("%s %s %s", p->Bname, p->Wname, p->ISBN),
            p= NULL;
            else p = p->next;
        }
        break;
	}
}
struct Book *insert(struct Book *head,struct Book *newp)
{
    char Bname[50];
    char Wname[20];
    char ISBN[8];
    double Bprice;
    scanf("%s%s%s%lf",Bname,Wname,ISBN,&Bprice);
    strcpy(newp->Bname,Bname);
    strcpy(newp->Wname,Wname); 
    strcpy(newp->ISBN,ISBN);
    newp -> Bprice = Bprice;
    newp -> next = head;
    head = newp;
    return head;
}
struct Book *delete(struct Book *head,char Bname[50],char Wname[20],char ISBN[8],double Bprice)
{
    struct Book *p,*prev;
    prev = NULL;
    p = head;
    while (p != NULL)
    {
		if(p->Bname == Bname,p->Wname == Wname,p->ISBN==ISBN,p->Bprice==Bprice)
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

void show(struct Book *head)
{
     struct Book *p=head;
     while (p!=NULL)
     {
		printf("%s %s %s %lf\n",p->Bname, p->Wname, p->ISBN,p->Bprice);
        p=p->next;
     }
}
void change(struct Book *head,int choe,char ISBN[8])
{
    char Bname[50];
    char Wname[20];
    double Bprice;
    struct Book *p=head;
    switch (choe)
    {
    case 1:
    printf("Bname:");
    scanf("%s",Bname);
    while(p!=NULL)
    {
        if(strcmp(p->ISBN,ISBN)==0)
        strcpy(p->Bname,Bname),
        printf("%s %s %s %lf",p->Bname,p->Wname,p->ISBN,p->Bprice),
        p = NULL;
        else p=p->next;
    }
    break;
    case 2:
    printf("Wname:");
    scanf("%s",Wname);
    while(p!=NULL)
    {
        if(strcmp(p->ISBN,ISBN)==0)
        strcpy(p->Wname,Wname),
		printf("%s %s %s %lf",p->Bname,p->Wname,p->ISBN,p->Bprice),
        p = NULL;
        else p=p->next;
    }
    break;
    case 3:
    printf("Bprice:");
    scanf("%lf",&Bprice);
    while(p!=NULL)
    {
        if(strcmp(p->ISBN,ISBN)==0)
		p->Bprice=Bprice,
        printf("%s %s %s %lf",p->Bname,p->Wname,p->ISBN,p->Bprice),
        p = NULL;
        else p=p->next;
    }
    break;
    }
}
void report(struct Book *head)
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
        
