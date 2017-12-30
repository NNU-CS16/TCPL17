#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#include "head.h"

void menu()

{    

    printf("***===图书管理系统===***\n");

    printf("***(s)查询图书条目***\n");

    printf("***(a)添加图书条目***\n");

    printf("***(u)修改图书条目***\n");

    printf("***(d)删除图书条目***\n");

    printf("***(i)显示统计信息***\n");

    printf("***(q)退出系统***\n");

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

                 head=Search(head);

                 break;

            case 'a':

                 head=Add(head);

                 break;

            case 'u':

	         head=Update(head);

                 break;

            case 'd':

                 head=Delete(head);

                 break;

            case 'i':

                 head=InfoSta(head);

	         break;

            default:

                printf("error command\n");

                break;

        }

    }

    return 0;

}




