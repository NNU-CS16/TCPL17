/*图书记录统计*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "head.h"
void report(struct Node *head)
{
  struct Node *p, *shift1, *shift2, *p1, *p2, *temp;
  int i = 0, j = 0, k = 0, n = 0;
  double max, min;
  p = head;
  shift1 = head;
  shift2 = head;
  p1 = head;
  temp = head;
  while (p != NULL)
  {
    i++;
    max = 0;
    min = 10000;
    if (p -> data.price >= max)
       max = p -> data.price;
    if (p -> data.price <= min)
       min = p -> data.price;
    p = p -> next;
  }
  while (temp != NULL)
  {
    while (p1 != NULL)
    {
      if (strcmp(temp -> data.writer, p1 -> data.writer) == 0)
	 j++;
      p1 = p1 -> next;
    }
    if (j > k)
    {
      k = j;
      p2 = temp;
    }
    temp = temp -> next;
    j = 0;
  }
  temp = head;
  while (temp -> next != NULL)
  {
    p1 = temp -> next;
    while (p1 != NULL)
    {
      if (strcmp(temp -> data.writer, p1 -> data.writer) != 0)
	 n++;
      p1 = p1 -> next;
    }
    temp = temp -> next;
  }
  printf("图书数目:%d\n", i);
  printf("作者数目:%d\n", n);
  printf("拥有图书最多的作者:%s\n", p2 -> data.writer);
  printf("价格最高的图书:\n");
  while (shift1 != NULL)
  {
    if (shift1 -> data.price == max)
	printf("%s %s %s %lf\n", shift1 -> data.name, shift1 -> data.writer,
				 shift1 -> data.ISBN, shift1 -> data.price);
    shift1 = shift1 -> next;
  }
  printf("价格最低的图书:\n");
  while (shift2 != NULL)
  {
    if (shift2 -> data.price == min)
        printf("%s %s %s %lf\n", shift2 -> data.name, shift2 -> data.writer,
                                 shift2 -> data.ISBN, shift2 -> data.price);
    shift2 = shift2 -> next;
  }
}
