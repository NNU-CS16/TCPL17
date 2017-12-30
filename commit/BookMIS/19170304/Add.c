#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include "head.h"



struct book *Add(struct book *head)

{

    struct book *newp=(struct book *)malloc(sizeof(struct book));

    printf("请输入要添加的图书的信息：");

    printf("ISBN:");

    scanf("%s",newp->ISBN);

    printf("书名：");

    scanf("%s[^\n]",newp->name);

    printf("作者:");

    scanf("%s[^\n]",newp->author);

    printf("价格：");

    scanf("%lf",&newp->price);

    newp->next=head;

    head=newp;

    return head;

}    

     
