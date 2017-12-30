/*查询图书条目*/
#include <stdio.h>
#include <string.h>
#include "head.h"
void search(struct Node *head)
{
  struct Node *p;
  int choice;
  int flag = 0;
  char name[51];
  char writer[21];
  char ISBN[8];
  p = head -> next;
  printf("1:按ISBN查询; 2:按书名查询; 3:按作者查询;");
  printf("请选择查询方式:1/2/3:");
  scanf("%d", &choice);
  if (choice == 1)
  {
    printf("请输入书籍的ISBN:");
    scanf("%s", ISBN);
    while (p != NULL)
    {
      if (strcmp(ISBN, p -> data.ISBN) == 0)
      {
	printf("%s %s %s %lf\n", p -> data.name, p -> data.writer,
	                         p -> data.ISBN, p -> data.price);
	flag = 1;
      }
      p = p -> next;
    }
    if (flag == 0)
       printf("\n没有该图书信息\n");
  }
  else if (choice == 2)
  {
    printf("请输入书籍的名称:");
    scanf("%s", name);
    while (p != NULL)
    {
      if (strstr(name, p -> data.name) != NULL)
      {
	printf("%s %s %s %lf\n", p -> data.name, p -> data.writer,
				 p -> data.ISBN, p -> data.price);
	flag = 1;
      }
      p = p -> next;
    }
    if (flag == 0)
       printf("\n没有该图书信息\n");
  }
  else if (choice == 3)
  {
    printf("请输入书籍的作者:");
    scanf("%s", writer);
    while (p != NULL)
    {
      if (strcmp(writer, p -> data.writer) == 0)
      {
	printf("%s %s %s %lf\n", p -> data.name, p -> data.writer,
				 p -> data.ISBN, p -> data.price);
	flag = 1;
      }
      p = p -> next;
    }
    if (flag == 0)
       printf("\n没有该图书信息\n");
  }
  else
    printf("\n您的选择有误\n");
}
