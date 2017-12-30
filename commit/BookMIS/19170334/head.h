#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Book
{
    char name[50];
    char writer[20];
    char ISBN[8];
    double price;
    struct Book *next;
};
typedef struct Book Book;

void seek();//查询图书条目
void add();//添加图书条目
void revise();//修改图书条目
void del();//删除图书条目
void count();//统计信息：图书数；作者数；书最多的作者；价格最高/低的书
Book *load();//将链表写入文件
void show();//显示图书条目(按书名字母序显示)

#endif
