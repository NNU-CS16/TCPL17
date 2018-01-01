/*修改图书条目*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
void update(struct Node *head)
{
  struct Node *p, *ptr;
  FILE* fp;
  int flag = 0;
  char ISBN[8];
  if ((fp = fopen("bookinfo.csv", "w")) == NULL)
  {
    printf("Can not open the file!\n");
    exit(1);
  }
  p = head ->next;
  if (p == NULL)
  {
    printf("\n文件为空\n");
    getchar( );
    return;
  }
  printf("请输入待查询图书的ISBN:");
  scanf("%s", ISBN);
  while (p != NULL)
  {
    if (strcmp(ISBN, p -> data.ISBN) == 0)
    {
      printf("%s %s %s %lf\n", p -> data.name, p -> data.writer,
			       p -> data.ISBN, p -> data.price);
      printf("更新图书信息\n");
      printf("书名:");
      scanf("%s", p -> data.name);
      printf("作者:");
      scanf("%s", p -> data.writer);
      printf("价格:");
      scanf("%lf", &p -> data.price);
      flag = 1;
      break;
    }
    p = p -> next;
    if (flag == 0)
       printf("没有找到相应图书");
  }
  ptr = head -> next;
  while (ptr != NULL)
  {
    fprintf(fp, "%s", ptr -> data.name);
    fprintf(fp, "%s", ptr -> data.writer);
    fprintf(fp, "%s", ptr -> data.ISBN);
    fprintf(fp, "%lf", ptr -> data.price);
    ptr = ptr -> next;
  }
  fclose(fp);
}
