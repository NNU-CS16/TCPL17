#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "head.h"
void menu()
{    
    printf("***===图书管理系统===***\n");
    printf("(s)查询图书条目\n");
    printf("(a)添加图书条目\n");
    printf("(u)修改图书条目\n");
    printf("(d)删除图书条目\n");
    printf("(i)显示统计信息\n");
    printf("(q)退出系统\n");
    printf("输入命令： ");
}
int main()
{
  
    struct book *head=NULL;
    head=load();
    while(1)
    {
        menu();
        char cmd;
        scanf("%c",&cmd);
        if(cmd=='q')
        {
            save(head);
            break;
        }
        switch(cmd)
        {
            case 's':
                system("cls");
                head=Search(head);
            case 'a':
                 system("cls");
	         head=Add(head);
            case 'u':
	        system("cls");
                head=Update(head);
            case 'd':
                system("cls");
                head=Delete(head);
            case 'i':
                system("cls");
                head=InfoSta(head);
            default:
                printf("error command\n");
        }
    }
    return 0;
}


