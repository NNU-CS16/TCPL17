#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define sum 15

int LoadArray(); //加载
void Search(); // 查找
void Add(); // 添加
void Modify(); // 修改
void Delete(); // 删除
void Show(); // 显示
void Count(); // 统计

void name(); // 利用书名查找
void ISBN(); // 利用ISBN查找

struct bookinfo
{
	char name[50];
	char author[20];
	int ISBN;
	double prize;
	struct bookinfo* next;
}; // 定义图书的链表结构
typedef struct bookinfo BookInfo;
BookInfo *head, *shift, *newp;
