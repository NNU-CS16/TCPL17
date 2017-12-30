#include "stdio.h"   /*标准输入输出函数库*/
#include "stdlib.h"  /*标准函数库*/
#include "string.h"  /*字符串函数库*/
#include "conio.h"    /*屏幕操作函数库*/
#include<malloc.h>   /*表示可以调用此宏定义下的函数*/
#define LEN sizeof(LIB) /*宏定义函数方便引用结构体*/




typedef struct librarian LIB;/*使结构体变量引用方便*/
struct librarian/*图书信息结构体*/
{
 long num;/*编号*/
 char name[15]; /*书名*/
 float  store; /*单价*/
 char auther[30]; /*作者*/
 char publishing[30]; /*出版社*/
 LIB *next; /*指针变量，用以实现链表结构*/
};




LIB *look(LIB *p,char  *o)/*查询图书信息函数*/
{
 LIB *head=p,*q;
 if(p==0)
  printf("\没有这本书\n");
 else if(strcmp(p->num,o)==0)
 {
  head=p->next;
  system("cls");
  printf("编号:%s  书名: %s \t单价: %.1f 作者:%s \t 出版社 : %s; \n",p->num,p->name,p->store,p->auther,p->publishing);
   printf("\n\n按任意键回到主菜单!\n");
    getch(); 
 }
 else 
  while(p!=0)
  {
   q=p;
   p=p->next;
   if(p==0)break;
   if(strcmp(p->num,o)==0)
   {
   system("cls");
  printf("编号:%s  书名: %s \t单价: %.1f 作者:%s \t 出版社 : %s; \n",p->num,p->name,p->store,p->auther,p->publishing);
   printf("\n\n按任意键回到主菜单!\n");
    getch();
   }
  }
   system("cls");
     return head;
}

