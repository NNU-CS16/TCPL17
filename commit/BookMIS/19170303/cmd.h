#ifndef CMD_H
#define CMD_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

struct book
{
    char name[20];
    char writer[20];
    char ISBN[20];
    float price;
    struct book *next;
};

typedef struct book Book;
Book Bookarr [MAX];
Book *creatbook();//创建链表
Book *addbook(Book *head);//添加图书
int check(Book *head,char *m);//验证图书编号是否重复
void fprint(Book *head);//将链表写入文件
Book *load();//从文件中读取信息并建成链表
void print_book(Book *head);//将链表信息输出
void change(Book *head);//修改图书信息
void deletebook (Book *head);//删除图书条目
void search(Book *head);//查询图书信息
int find(const char *str,const char *substr);//字符串匹配
void name_search(Book *head);//按图书名字
void writer_search(Book *head);//按作者查询
void ISBN_search(Book *head);//按编号查询
void name_sort(Book *head);//按图书名排序
void statistics (Book *head);

#endif
