#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define yes 1
#define no 0
typedef struct book
{
	char title[50];
	char author[20];
	int ISBN;
	double price;
	struct book* next;
}book;//创建图书信息
void query ();//查询
void amend ();//修改
void delete ();//删除
void display ();//显示
void stat ();//统计
void add ();//添加
book* read ();//读取到链表



