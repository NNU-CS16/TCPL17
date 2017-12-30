#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"

void deletel(STUDENTS stu[])  
  { system("cls");   
   char Stuname2[50];  
   int i,j;  
   printf("请输入图书书名：");  
   scanf("%s",Stuname2);  
   printf("\n");  
   for(i=0;i<k;i++)  
   if(strcmp(stu[i].name,Stuname2)==0)     
     for(j=0;j<20;j++)  
       stu[i].name[j]=stu[i+1].name[j];  
   k--;  
    
    
   printf("删除成功\n");  
   printf("按任意键加回车返回主菜单!");  
   scanf("%d",&i);  
   getchar();  
}  

