#include <stdio.h>
#include <stdlib.h>
#include "head.h"
void dispiay(struct book *head)
{
  struct book *p=(struct book *)malloc(sizeof(struct book));
  p=head;
  while(p!=NULL)
  {
    printf("name:%s\tauthor:%s\tISBN:%s\tprice:%.2lf\tnum:%d\n",p->name,p->author,p->ISBN,p->price,p->num);
   p=p->next;
  }
}
