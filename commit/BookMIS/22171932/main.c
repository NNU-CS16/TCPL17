#include <stdio.h>
#include <stdlib.h>
#include "alg.h"
int menu();
int err();
int main()
{
    struct Book *head = creat();
    struct Book *newp;
    char book_name[50];
    char writer[20];
    char ISBN[8];
    double price;
    int cmd;
    do
    {
      menu();
      cmd = gethar();
      gethar();
      if(cmd == '7')
      {
        break;
      }
      switch(cmd)
      {
            case '1':
                search(head);
                break;
            case '2':
	        head = add(head);
                bookList(head);
	        break;
            case '3':
                head = update(head);
		bookList(head);
                break;
            break;
            case '4':
                head = delete(head);
		bookList(head);
                break;
            case '5':
                bookList(head);
            case '6':
                bookReport(head);
                break;      
            default:errCmd();
        }
     }while(1);
}
int menu()
{
    printf("=== 图书管理系统菜单 ===\n");
    printf("\n");
    printf("1...........查询图书条目\n");
    printf("2...........添加图书条目\n");
    printf("3...........修改图书条目\n");
    printf("4...........删除图书条目\n");
    printf("5...........显示图书条目\n");
    printf("6.....图书记录的统计信息\n");
    printf("7...............退出系统\n");
    printf("请输入指令：\n");
    return 0;
}
int errCmd()
{
    printf("Error command!\n");
    return -1;
}
