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
printf("*******************************************\n");
printf("1：建立图书链表;\n2：显示图书信息;\n3：添加图书信息;\n4：删除图书记录;\n0：退出:;\n");
  printf("*******************************************\n");
  printf("输入你的选择回车进入:");


