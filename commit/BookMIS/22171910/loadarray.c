/*加载导入图书条目*/
#include <stdio.h>
#include <stdlib.h>
#include "head.h"
int loadarray(struct Node *head)
{
  struct Node *p, *temp;
  FILE *fp;
  fp = fopen("bookinfo.csv", "r");
  if (fp == NULL)
  {
    printf("Cannot open this file!\n");
    exit(1);
  }
  head = (struct Node *)malloc(sizeof(struct Node));
  if(!head)
  {
    printf("\n application failed");
    return 0;
  }
  head -> next = NULL;
  temp = head;
  while (fgetc(fp) != EOF)
  {
    fseek (fp, -1, 1);
    p = (struct Node*)malloc(sizeof(struct Node));
    if (!p)
    {
      printf("\n application failed");
      return 0;
    }
    fscanf(fp, "%s", p -> data.name);
    fscanf(fp, "%s", p -> data.writer);
    fscanf(fp, "%s", p -> data.ISBN);
    fscanf(fp, "%lf", &p -> data.price);
    p -> next = NULL;
    temp -> next = p;
    temp = p;
  }
  fclose(fp);
  return 0;
}
