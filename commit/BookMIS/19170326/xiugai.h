#ifndef XIUGAI_H
#define XIUGAI_H

#include<stdio.h>
#include<stdlib.h>

struct Book *xiugai(struct Book *head, struct Book *p)
{
	printf("1.修改书名   2.修改作者    3.修改ISBN   4.修改价格\n");
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1: 
			printf("输入价格：");
			scanf("%s",p->bookname);
			break;
		case 2: 
			printf("输入作者：");
			scanf("%s",p->author);
			break;
		case 3: 
			printf("输入ISBN：");
			scanf("%s",p->ISBN);
			break;
		case 4: 
			printf("输入价格：");
			scanf("%lf",&p->price);
			break;
	}
	return head;
}

#endif
