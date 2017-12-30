#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"
void sort(STUDENTS stu[])  
  {  int i,j,n=1,x;  
     system("cls");   
     int t;  
     for(i=0;i<k-1;i++)  
      for(j=i+1;j<k;j++)  
      if(stu[i].price<stu[j].price)  
      { t=stu[i].price;  
        stu[i].price=stu[j].price;  
        stu[j].price=t;  
              t=stu[i].num;  
        stu[i].num=stu[j].num;  
        stu[j].num=t;  
  
      }  
     for(i=0;i<k;i++)  
    printf("排名 ISBN 价格\n %d%d%.2f\n",n++,stu[i].num,stu[i].price);  
     printf("按任意键加回车返回主菜单!");  
   scanf("%d",&x);  
     getchar();  
  }  
  
