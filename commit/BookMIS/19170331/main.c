#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void menu()
{
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("------------图书管理系统---------\n");
    printf("-------(1)查询图书条目-----------\n");
    printf("-------(2)添加图书条目-----------\n"):
    printf("-------(3)修改图书条目-----------\n"):
    printf("-------(4)删除图书条目-----------\n");
    printf("-------(5)显示图书条目-----------\n");
    printf("-------(6)图书记录等统计---------\n");
    printf("-------(q)退出系统---------------\n");
    printf("ffffffffffffffffffffffffffffffffff\n");
    printf(" 请输入对应功能前等序号:");
}
int main()
{
    struct book *head=NULL;
    head=loadBook();
    while(1)
    {
        menu();
        char cmd;
        if(cmd == 'q')
        {
            save(head);
            break;
        }
        switch(cmd)
        {
            case '1':
                    head=search(head);
                    break;
            case '2':
                    head=add(head);
                    break;
            case '3':
                    head=revise(head);
                    break;
            case '4':
                    head=delete(head);
                    break;
            case '5':
                    ouput(head);
                    break;
            case '6':
                    tongji(head);
                    break;
            default:
                    printf("错误的指令！\n")
                    break;
        }
    }
    return 0;
}
