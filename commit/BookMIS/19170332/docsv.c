#include<stdio.h>
#include<stdlib.h>
#include "start.h"
struct book *docsv(struct book *head)
{
     FILE *fp;
     if((fp = fopen("book.csv","a")) == NULL)
     {
           printf("打不开耶呵呵\n");
          
     }
     head=(struct book*)malloc(sizeof(struct book));
     struct book *p=head;
     p->next=NULL;
     while(!feof(fp))
     {
           struct book *newp=(struct book*)malloc(sizeof(struct book));
           fscanf(fp,"%s %s %s %f\n",head->name,head->author,head->ISBN,head->price);
           if(feof(fp))
           {
                fclose(fp);
                p->next=NULL;
                head=head->next;
                return head;
           }
           p->next=newp;
           p=newp;
           p->next=NULL;
     }
            
}

