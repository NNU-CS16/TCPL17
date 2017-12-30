#include "head.h"
struct book* creat ()
{
        struct book *head=(struct book *)malloc(sizeof(struct book));
        char name[50];
        char writer[20];
        int isbn;
        double price;
        struct book *p=head;
        struct book *q=head;
        p->next=NULL;
        FILE *fp;
        if((fp=fopen("book.csv","r"))==NULL)
        {
                printf("can't open!");
                exit(1);
        }
        while(fscanf(fp,"%s %s %d %lf",name,writer,&isbn,&price)!=EOF)
        {
                q=(struct book *)malloc(sizeof(struct book));
                strcpy(q->name,name);
                strcpy(q->writer,writer);
                q->ISBN=isbn;
                q->price=price;
                p->next=q;
                p=q;
        }
        p->next=NULL;
        fclose(fp);
        return head->next;
}


                       

