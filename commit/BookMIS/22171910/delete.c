/*删除图书条目*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "head.h"
int Delete(struct Node *head)
{
  struct Node *p, *ptr;
  FILE *fp;
  char ISBN[8];
  int flag = 0;
  fp = fopen("bookinfo.csv", "w");
  if (fp == NULL)
  {
    printf("Can not open the file!\n");
    exit(1);
  }
  ptr = head;
  p = head -> next;
  printf("请输入待删除书籍的ISBN:");
  scanf("%s", ISBN);
  if (strcmp(ISBN, p -> data.ISBN) == 0)
  {
    ptr -> next = p -> next;
    p -> next = NULL;
    flag = 1;
  }
  else
  {
    ptr = p;
    p = p -> next;
  }
  if (flag == 0)
  printf("未找到待删除的图书信息\n");
  ptr = head -> next;
  while (ptr != NULL)
  {
    fprintf(fp, "%s", ptr -> data.name);
    fprintf(fp, "%s", ptr -> data.writer);
    fprintf(fp, "%s", ptr -> data.ISBN);
    fprintf(fp, "%lf", ptr -> data.price);
    ptr = ptr -> next;
  }
  return 0;
}
