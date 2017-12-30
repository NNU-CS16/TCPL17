/*添加图书条目*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
void insert(struct Node *head)
{
  struct Node *p, *ptr;
  struct Node *shift;
  char ISBN[8];
  FILE *fp;
  int flag = 0;
  fp = fopen("bookinfo.csv", "a");
  if (fp == NULL)
  {
    printf("Can not open the file!\n");
    exit(1);
  }
  p = head;
  ptr = p;
  while (p -> next != NULL)
  {
    p = p -> next;
    ptr = p;
  }
  p = (struct Node*)malloc(sizeof(struct Node));
  printf("请输入图书ISBN");
  scanf("%s", ISBN);
  shift = head;
  while (shift != NULL)
  {
    if (strcmp(ISBN, shift -> data.ISBN) == 0)
    {
      printf("该ISBN已经存在\n");
      flag = 1;
    }
    shift = shift -> next;
  }
  if (flag == 0)
  {
    printf("请输入书籍信息:书名 作者 价格\n");
    scanf("%s%s%lf", p -> data.name, p -> data.writer, &p -> data.price);
    fprintf(fp, "%s", p -> data.name);
    fprintf(fp, "%s", p -> data.writer);
    fprintf(fp, "%s", p -> data.ISBN);
    fprintf(fp, "%lf", p -> data.price);
    ptr -> next = p;
    p -> next = NULL;
    ptr = ptr -> next;
    fclose(fp);
  }
}
