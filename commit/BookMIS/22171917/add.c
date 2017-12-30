#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
struct book *add(struct book *head)
{
    printf("请输入添加的图书信息:\n");
    struct book *newp = (struct book *)malloc(sizeof(struct book));
    printf("书名:");    scanf(" %[^\n]",newp->name);
    printf("作者:");    scanf(" %[^\n]",newp->author);
    printf("ISBN:");    scanf(" %[^\n]",newp->ISBN);
    printf("价格:");    scanf("%lf",&newp->price);
    printf("添加数目:"); scanf("%d",&newp->num);
    struct book *p;
    int flag=0,mark=0;
    p=(struct book *)malloc(sizeof(struct book));
    for(p=head;p!=NULL;p=p->next)
     if(strcmp(p->ISBN,newp->ISBN)==0)
	{
	 flag=1;  break;
	}
	if(flag==0)
	{
         if(head==NULL)
	 {
	  head=newp; head->next=NULL;
	 } 
	 else
	 {
          for(p=head;(p->next)!=NULL;p=p->next)
	  {
	   if(strcmp(newp->name,head->name) < 0)
	    {
	      newp->next=head;  head=newp;
              mark=1;
	      break;
            }
            if(strcmp(newp->name,(p->next)->name) < 0)
	     {
		newp->next=p->next; p->next=newp;
		mark=1;
		break;
	     }
	   }
	    if(mark==0)
	    {
	     p->next=newp;  newp->next=NULL;
	    }
	  }
	}
	else
	p->num+=newp->num;
	return head;
}
