#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function.h"
void print()
{
    printf("******************************\n");
}
void menu()
{
    print();
    printf("*           请选择           *\n");
    print();
    printf("*         a:添加信息;        *\n*         b:修改信息;        *\n*         c:删除数目;        *\n");
    printf("*         d:查看图书;        *\n*         e:图书查找;        *\n*         f:统计数据;        *\n");
    printf("*         q:退出;            *\n");
    print();
}
int main()
{
    char cho;
    struct book *head = (struct book*)malloc(sizeof(struct book));
    head = link(head);
    print();
    printf("*   Welcome to the BookMIS   *\n");
    print();
    menu();
    while (cho != 'q')
    {
        cho = getchar();
        switch (cho)
        {
            case 'a':add(head);
                     printf("成功！\n");
                     menu();
                     break;
            case 'b':amend(head);
                     printf("成功！\n");
                     menu();
                     break;
            case 'c':head = del(head);
                     menu();
                     break;
            case 'd':check(head);
                     menu();
                     break;
            case 'e':seek(head);
                     printf("查找结束！\n");
                     menu();
                     break;
            case 'f':stat(head);
                     menu();
                     break;
            case 'q':break;
            default:break;
        }
    }
    return 0;
}

