#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
void menu()
{
  printf("\n==========图书管理系统==========\n");
  printf("1. 查询图书条目\n");
  printf("2. 添加图书条目\n");
  printf("3. 修改图书条目\n");
  printf("4. 删除图书条目\n");
  printf("5. 显示图书条目\n");
  printf("6. 统计图书信息\n");
  printf("0. 退出系统\n");
  printf("输入命令:\n");
}
void wrong()
{
  printf("Error Command!\n");
}

int main()
{
  struct Node *head;
  int choice = 7;
  loadarray(head);
  while (1)
  {
    menu();
    printf("请输入操作序号(0-6):");
    scanf("%d", &choice);
    if (choice == 0)
    {
      printf("\nThanks for using!");
      getchar();
      break;
    }
    switch (choice)
    {
      case 1:search(head);
	     menu();
	     break;
      case 2:insert(head);
	     menu();
	     break;
      case 3:update(head);
	     menu();
	     break;
      case 4:Delete(head);
	     menu();
	     break;
      case 5:output(head);
	     menu();
	     break;
      case 6:report(head);
	     menu();
	     break;
      default:wrong();
	      break;
    }
  }
  getchar();
  return 0;
}

