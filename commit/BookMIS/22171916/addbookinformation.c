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



LIB *insert(LIB *p, LIB *o)/*插入图书信息函数*/
{
 LIB *head=p,*q;/*建立结构体指针变量，head用来保存首链表*/
 system("cls");/*清理屏幕*/
 if(p==0) /*当链表为空时*/
 {
  head=o;
  o->next=0;
 }
 else if((o->num)<(p->num)) /*嵌入结构体通过编号排序*/
 {
  head=o;
  o->next=p;
 }
 else 
 {
  while((o->num)>(p->num)&&p->next!=0)
  {
   q=p;
   p=p->next;
  }
     if(p->next==0)
  {
   p->next=o;
   o->next=0;
  }
  else
  {
   q->next=o;
   o->next=p;
  }
 }
 system("cls");
    return head;
}

