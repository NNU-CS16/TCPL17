#ifndef MENU_H
#define MENU_H

#include<stdio.h>

int menu( )
{
	printf("---------欢迎进入图书管理系统！--------\n");
	printf("	(a)查询图书条目\n");
	printf("	(b)添加图书条目\n");
	printf("	(c)修改图书条目\n");
	printf("	(d)删除图书条目\n");
	printf("	(e)显示图书条目\n");
	printf("	(f)图书记录的统计信息\n");
	printf("	(g)退出系统\n");
	printf("-----------------------------------------\n");
	printf("请输入命令：\n");
	return 0;
}

#endif
