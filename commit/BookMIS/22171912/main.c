#include "head.h"
void menu()
{
  printf("\n图书管理系统：\n");
  printf("1. 查询图书条目\n");
  printf("2. 添加图书条目\n");
  printf("3. 修改图书条目\n");
  printf("4. 删除图书条目\n");
  printf("5. 显示图书条目\n");
  printf("6. 统计图书数目\n");
  printf("7. 统计图书价钱\n");
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
  Load();
  while (1)
  {
    menu();
    printf("请输入操作序号(0-6):");
    scanf("%d", &choice);
    if (choice == 0)
    {
      printf("\n谢谢使用!");
      getchar();
      break;
    }
    switch (choice)
    {
      case 1:Search();
	     menu();
	     break;
      case 2:Add();
	     menu();
	     break;
      case 3:Modify();
	     menu();
	     break;
      case 4:Delete();
	     menu();
	     break;
      case 5:Show();
	     menu();
	     break;
	  case 6:Count_num();
         menu();
      case 7:Count_price();
	     menu();
	     break;
      default:wrong();
	      break;
    }
  }
  getchar();
  return 0;
}

