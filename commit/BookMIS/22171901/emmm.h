#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
struct Book
{
    char name[40];    //图书名字
    char auth[20];    //作者名字
    char ISBN [8];    //书号
    double price;     //价格
    struct Book *next;
};
int menu();
struct Book *load_book(); //加载图书信息
struct Book *search_book_ISBN (char *ISBN , struct Book *head_book);//查询图书编号
struct Book *search_book_name (char name[] , struct Book *head_book);//查询图书书名
struct Book *search_book_auth (char auth[] , struct Book *head_book);//查询作者
struct Book *insert_book (struct Book *head_book); //添加图书条目
struct Book *update_book (struct Book *head_book);//修改图书条目
struct Book *delete_book (struct Book *head_book , char *ISBN);//删除图书
int saveAs (struct Book*);//保存图书
void list_book (struct Book *head_book); //显示
void report_book (struct Book *head_book);   //统计
