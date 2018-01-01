#include<stdio.h>
#include<stdlib.h>
#include"Book.h"

struct book *load()
{
FILE *fp;
char ch;
struct book *head,*tail,*p1;
head=tail=NULL;
if((fp=fopen("book.csv","r"))==NULL)
{
printf("File open error!\n");
exit(0);
}
ch=fgetc(fp);
if(ch=='1')
{
while(!feof(fp))
{
p1=(struct book *)malloc(sizeof(struct book));
fscanf(fp,"%s%s%s%lf\n",p1->Bname,p1->Author,p1->ISBN,&p1->Price);
if(head==NULL)
head=p1;
else
tail->next=p1;
tail=p1;
}
tail->next=NULL;
fclose(fp);
return head;
}
else
return NULL;
}	 
