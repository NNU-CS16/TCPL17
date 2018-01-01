#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"
void change(STUDENTS stu[])  
  {  int num,i,choice;  
     system("cls");   
   printf("\n\n\n 请输入您要修改的图书的ISBN");  
     scanf("%d",&num);  
     for(i=0;i<k;i++)  
     { if(num==stu[i].num)  
         printf("\nISBN：%d,书名：%s,作者：%s,价格: %.2f,",
         stu[i].num,stu[i].name,stu[i].author,stu[i].price,);  
  
     printf("\n\n\n请输入您想要修改的数据\n\n");  
     printf("1. 书名\n\n");  
     printf("2. 作者\n\n");  
     printf("3. 价格\n\n");
     printf("请选择（1-3）:");  
    scanf("%d",&choice);  
    switch(choice)  
    {case 1:{  
           printf("\n   请输入你改的新书名");  
             scanf("%d",&stu[i].num);   
         break;  
         }  
     case 2:{  
           printf("\n   请输入你改的新作者");  
             scanf("%s",stu[i].name);   
         break;  
        }  
     case 3:{  
           printf("\n   请输入你改的新价格");  
             scanf("%s",stu[i].author);   
         break;  
        }  
        }      
        }  
    }  
     
     printf("ISBN：%d,书名：%s,作者：%s,价格: %.2f",
     stu[i].num,stu[i].name，stu[i].author,stu[i].price,);  
     printf("按任意键加回车返回主菜单!");  
     scanf("%d",&i);  
     break;  
   }  
}  
