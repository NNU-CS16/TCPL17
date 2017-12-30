#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include "head.h"

struct book *load()

{

    struct book *head,*p;

    head=(struct book *)malloc(sizeof(struct book));

    char line[100];

    FILE *fp;

    fp=fopen("book.csv","r");

    if(fp==NULL)

    {

        printf("文件打开失败！\n");

    }

    if(fgets(line,100,fp)!=NULL)

    {

        scanf(line,"%s[^\t] %s[^\t] %s[^\t] %lf",head->ISBN,head->name,head->author,&head->price);    

        head->next=NULL;

        

    }

    else

        return NULL;

    while(fgets(line,100,fp)!=NULL)

    {

	p=head;

        while(p!=NULL)

        {

     	    if(p->next==NULL)

                break;

            p=p->next;

        }

        struct book *newp=(struct book *)malloc(sizeof(struct book));

        scanf(line,"%s[^\t] %s[^\t] %s[^\t] %lf",newp->ISBN,newp->name,newp->author,&newp->price);

        p->next=newp;

        newp->next=NULL;

     }

    fclose(fp);





    return head;

}


