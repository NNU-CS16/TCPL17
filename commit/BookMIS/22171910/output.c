/*显示图书条目*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
void output(struct Node *head)
{
  struct Node *p;
  p = head;
  if (p != NULL)
  {
    printf("%s  %s  %s  %lf\n", p -> data.name, p -> data.writer,
                                p -> data.ISBN, p -> data.price);
    p = p -> next;
  }
}
