#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"
struct book
{
    char name[50];
    char ISBN[8];
    char author[50];
    double price;
    int num[10];
    struct book *next;
};

struct book *load()
{
    struct book *head;
    head=(struct book *)malloc(sizeof(struct book));
    char line[100];
    FILE *fp;
    fp=fopen("book.csv","r");
    if(fp==NULL)
    {
        return -1;
    }
    while(fgets(line,100,fp)!=NULL)
    {
        sscanf(line,"%s%s%s%d",head->ISBN,head->name,head->author,&head->price);    
        head=head->next;
        
    }
    return head;
}

