 #include <stdio.h>
 #include "cmd.h"
 #include <string.h>
 #include <stdlib.h>

 Book *insert( Book *head )
{
	Book *p, *pre;
	p = head;
	pre = NULL;
	Book *newp = (Book *)malloc(sizeof(Book));
	printf("请输入图书名：");
		scanf(" %[^\n]", newp->name);
	printf("请输入作者名：");
		scanf(" %[^\n]", newp->author);
	printf("请输入图书的ISBN：");
		scanf(" %[^\n]", newp->ISBN);
	printf("请输入图书价格：");
		scanf("%lf", &newp->price);

	if (head == NULL)
	{
		newp->next = head;
		head = newp;
		return head;
	}	
	while ( p != NULL )	
	{	
		if (strcmp(newp->name, p->name) < 0)
			break;
		pre = p;
		p = p->next;
	}
	
	if ( p == head )
	{
		newp->next = p;
		head = newp;
		return head;
	}
	if ( p == NULL )
	{
		newp->next = p;
		pre->next = newp;
	}
	else
	{
		newp->next = p;
		pre->next = newp;
	}
	return head;
}
