#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"
void menu()  
{  
  STUDENTS stu[20];  
  int choice,k,sum;  
  sum=read_file(stu);  
  if(sum==0)  
   {  printf("请添加图书条目，按回车后进入\n");  
      getch();  
    sum=add(stu);  
   }  
    
  do  
  {  system("cls");    
     printf("\n\n\n图书信息管理系统\n\n");  
     printf("1. 查询图书条目\n\n");  
     printf("2. 修改图书条目\n\n");  
     printf("3. 删除图书条目\n\n");  
     printf("4. 显示图书条目\n\n");  
     printf("5. 记录图书价格\n\n");  
     printf("0. 退出系统\n\n");  
     printf("请选择（0-5）:");  
     scanf("%d",&choice);   
    switch(choice)  
    {  
      case 1: k=inquire(stu); break;/*查询图书条目*/  
      case 2: alter(stu) ; break;/*修改图书条目*/  
      case 3: delete(stu); break;/*删除图书条目*/  
      case 4: display(stu); break;/*显示图书条目*/  
      case 5: statistics(stu); break;/*记录图书价格*/  
      case 0: break;  
    }  
  }while(choice!=0);  
  save_file(stu,sum);  
}  
int main()  
{    
  int i,sum;  
  pquantitydis();  
  check();  
  menu();     
}       
