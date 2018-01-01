#include <stdio.h>
#include <stdlib.h>
#include "head.h"
void menu()
{
    printf("***************************\n");
    printf("**=======================**\n");
    printf("** 图书管理信息系统      **\n");
    printf("** (s)查询图书条目       **\n");
    printf("** (a)添加图书条目       **\n");
    printf("** (r)修改图书条目       **\n");
    printf("** (d)删除图书条目       **\n");
    printf("** (o)显示图书条目       **\n");
    printf("** (i)查看图书统计信息   **\n");
    printf("** (q)退出系统           **\n");
    printf("**=======================**\n");
    printf("***************************\n");
    printf("请输入对应功能前的序号:");
}
int main()
{
    struct book *head=NULL;
    head=loadBook();
    while (1)
    {
        menu();
        char cmd;
        scanf("%c", &cmd);
        if (cmd == 'q')
        {
            save(head);
            break;
        }
        switch(cmd)
        {
            case 'a':
                    head=add(head);
                    break;
            case 's':
                    head=search(head);
                    break;
            case 'r':
                    head=revise(head);
                    break;
            case 'o':
                    output(head);
                    break;
            case 'i':
                    InfoSta(head);
                    break;
            case 'd':
                    head=delete(head);
                    break;
            default:
                   printf("Error Command!\n");
                   break;
        }
    }
    return 0;
}
