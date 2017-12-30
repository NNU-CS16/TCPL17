#include<stdio.h>
#include<stdlib.h>
#include"kyh.h"
void menu()
{
    printf("===欢迎进入图书管理系统！===\n");
    printf("(a)查询图书条目\n");
    printf("(b)添加图书条目 \n");
    printf("(c)修改图书条目\n");
    printf("(d)删除图书条目\n");
    printf("(e)显示图书条目\n");
    printf("(f)图书记录的统计信息\n");
    printf("(q)退出系统\n");
}
int main()
{
	struct book *head = NULL;
	head = loadbook();
	//loadbook(head);
	while(1)
	{
		menu();
		char cmd;
		scanf(" %c", &cmd);
		if(cmd == 'q')
		{
			save(head);
			break;
		}
		switch(cmd)
		{
			case 'b':
				head = addbook(head);
				break;
			case 'a':
				head = search(head);
				break;
			case 'c':
				head = modify(head);
				break;
			case 'e':
				display(head);
				break;
			case 'f':
				statistics(head);
				break;
			case 'd':
				head = deletebook(head);
				break;
			default:
				printf("错误的指令!\n");
				break;
		}
	}
	return 0;
}
