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



LIB *del(LIB *p,char  *o)/*删除图书信息函数*/
{
 LIB *head=p,*q;
 if(p==0)
  printf("\没有这本书\n");
 else if(strcmp(p->num,o)==0)/*当首链表为要删除函数时*/
 {
  head=p->next;
  free(p);
 }
 else 
  while(p!=0)
  {
   q=p;
   p=p->next;/*通过链式循环寻找目标编号*/
   if(p==0)break;
   if(strcmp(p->num,o)==0)
   {
    q->next=p->next;
    free(p);/*释放目标结点空间*/
    break;
   }
  }
   system("cls");
     return head;
}

