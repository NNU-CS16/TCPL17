 #include <stdio.h>
 #include "cmd.h"
 #include <stdlib.h>
 #include <string.h>

 Book *update(Book *head)
{
	Book *p;
	printf("请查找需要修改的书目：\n");
		p = search(head);
	printf("请选择需要修改的信息：\n");
	printf("===A -> 修改图书名称===\n");
	printf("===B -> 修改作者名称===\n");
	printf("===C -> 修改图书价格===\n");
	printf("键入相应小写字母进行选择：");
	
	char cmd;
	scanf(" %c", &cmd);
	
	switch (cmd)
	{
		case 'a':
			scanf(" %[^\n]", p->name);
		break;
		
		case 'b':
			scanf(" %[^\n]", p->author);
		break;
		
		case 'c':
			scanf("%lf", &p->price);
		break;
		
		default:
			printf("Error Command\n");
			return p;
	}
	return p;
}
			 
