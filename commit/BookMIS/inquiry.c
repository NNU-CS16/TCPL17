#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"

void inquire(STUDENTS stu[])   
  { int i;  
    char name[20];  
    system("cls");  
    printf("     \n\n请输入您要查找的图书的书名：");  
    scanf("%s",&name);  
    for(i=0;i<k;i++)  
      if(strcmp(name,stu[i].name)==0)  
         printf("\n\n\nISBN：%d,书名：%s,作者：%s,价格: %.2f",
         stu[i].num,stu[i].name, stu[i].author,stu[i].price,);  
    printf("按任意键加回车返回主菜单!");  
    scanf("%d",&i);  
    getchar();  
  }  

    
