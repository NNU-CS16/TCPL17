#include<stdio.h>
#include<stdlib.h>/*标准函数库*/
#include<string.h>/*字符串函数库*/
#include<conio.h>/*屏幕操作函数库*/
#include<malloc.h>/*表示可以调用此宏定义下的函数*/
#define LEN sizeof(LIB)/*宏定义函数方便引用结构体*/
typedef struct librarian LIB;/*命名，使结构体变量引用方便*/
struct librarian/*图书信息结构体*/
{
char name[20];/*书名*/
char author[20];/*作者*/
char ISBN[50];/*ISBN*/
double float price;/*书的价钱*/
LIB *next;/*指针变量，以实现链表数据结构*/
};
int main()
{
 LIB *p=0,*h,*q;/*定义链表*/
 int m,a;/*保存选择结果变量*/
 
 printf("*******************************************\n");
 printf("1：建立图书链表;\n2：显示图书信息;\n3：添加图书信息;\n4：删除图书记录;\n 5 :查询图书记录\n 0：退出:;\n");
 printf("*******************************************\n");
 printf("输入你的选择回车进入:");
 scanf("%d",&m);


 switch(m)/*switch选择结构实现功能选择*/
 {
  case 1 :/*建立图书链表*/
   printf("请输入需要录入本数:");
         scanf("%d",&a);
          h=p=creat(a);
         break;
  case 2 :/*显示图书信息*/
         p=h;
          output(p);
         break;
  case 3 :/*添加图书信息*/
        p=h;
     q=(LIB *)malloc(LEN);
      printf("输入图书编号:");
       scanf("%d",&q->num);
          
      printf("输入图书名称:");
      scanf("%s",&q->name);  
      
      printf("输入图书单价:");
      scanf("%f",&q->store);
	  while(getchar()!='\n');
          
      printf("输入图书的作者:");
      scanf("%s",&q->auther); 
      
     
       break;


}
