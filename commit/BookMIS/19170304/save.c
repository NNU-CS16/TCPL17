#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include "head.h"



struct book *save(struct book *head)

{

    struct book *p;

    p=head;

    FILE *fp;

    fp=fopen("book.csv","w");

    if(fp=NULL)

    {

        printf("无法保存文件");

    }

    while(p!=NULL)

    {

        fprintf(fp,"%s\t",p->ISBN);

        fprintf(fp,"%s\t",p->name);

        fprintf(fp,"%s\t",p->author);

        fprintf(fp,"%f\t",p->price);

        p=p->next;

     }

    fclose(fp);

    return 0;

}
