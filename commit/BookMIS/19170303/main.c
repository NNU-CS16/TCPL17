#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "cmd.h"

void menu()
{
    printf("                         ********** 欢迎光临 **********\n");
    printf("         ********************** 图书信息管理系统 ************************\n\n");
    printf("               **********************************************\n");
    printf("               **********************************************\n");
    printf("               || 1-添加图书                    2-删除图书 ||\n");
    printf("               || 3-图书列表                    4-图书统计 ||\n");
    printf("               || 5-查询图书                    6-修改图书 ||\n");
    printf("               ||                              0-退出系统 ||\n");          
    printf("               **********************************************\n");
    printf("               **********************************************\n");
    printf("请输入所选择的序号:");
}

int main()
{
	struct book *head=NULL;
	head=load();
	char a;
	while(1)
	{
		menu();
		int cmd;
		scanf("%d",&cmd);
		if(cmd == 0)
		{
			fprint(head);
			break;
		}
                switch(cmd)
                {
                case 0:
		   printf("谢谢光临\n");break;
                case 1:
                     head=addbook(head);
                     printf("添加成功!\n");
                     printf("是否将新信息保存到文件?(y/n)\n");
                     scanf("%c",&a);
                     getchar();
                     switch(a)
                     {
                     case 'n':
                         break;
                     case 'y':
                         fprint(head);
                         printf("保存成功!\n");
                         getchar();
                         break;
                     }
                     break;
               case 2:
                 head=load();
                 if (head == NULL)
                 {
                     printf("文件为空,请先录入数据!\n");
                     getchar();
                     break;
                 }
              
                 else
                 {
                     deletebook(head);
                     getchar();
                     break;
                 }
                 break;
               case 3:
                 head=load();
                 if(head == NULL)
                 {
                     printf("文件为空,请先录入数据!\n");
                     getchar();
                     break;
                 }
                 else
                 {
                     print_book(head);
                     getchar();
                     break;
                 }
               case 4:
                 head=load();
                 if(head==NULL)
                 {
                     printf("文件为空,请先录入数据!\n");
                     getchar();
                     break;
                 }
                 else
                 {
                     statistics(head);
                     getchar();
                 }
                 break;
               case 5:
                     head=load();
                     if(head==NULL)
                     {
                         printf("文件为空,请先录入数据!\n");
                         getchar();
                         break;
                     }
                     else
                     {
                         search(head);
                         getchar();
                     }
                     break;
               case 6:
                   head=load();
                   if(head == NULL)
                   {
                       printf("文件为空,请先录入数据!\n");
                       getchar();
                       break;
                   }
                   else
                   {
                       change(head);
                       getchar();
                       break;
                   }
                   break;

               default:
                   printf("您的输入有误,请重新输入!\n");
                   getchar();
                   break;
                }
	}
}
