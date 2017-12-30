#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alg.h"
int menu();
int errCmd();

int main()
{
	struct Node *p;
	struct Node *head;
	head = load();
	char a;
	char name[50];
	char writer[20];
	char ISBN[8];
	do
	{
		menu();
		a = getchar();
		getchar();
		if (a == 'q')
		{
		    save(head);
			break;
		}
		switch(a)
		{
			case'i':
				head = add(head);
				output(head);
				break;
			case'u':
				head = update(head);
				output(head);
				break;
			case'd':
				head = delete(head);
				output(head);
				break;
			case'a':
				output(head);
				break;
			case's':
				search(head);
				break;
			case'r':
				report(head);
				break;
			default:errCmd();
		}
	}while(1);
}

int menu()
{
    printf("===图书管理系统===\n");
    printf("(s)查询图书信息\n");
    printf("(u)修改图书信息\n");
    printf("(i)添加图书信息\n");
    printf("(d)删除图书信息\n");
    printf("(a)输出图书信息\n");
    printf("(r)统计图书信息\n");
    printf("(q)退出系统\n");
    printf("请输入指令:");
    return 0;
}

int errCmd()
{
    printf("Error Command!\n");
    return -1;
}

