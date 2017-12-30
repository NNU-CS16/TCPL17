#ifndef HYT_H
#define HYT_H

typedef struct book//图书信息
{
    int ISBN;
    char name[50];
    char writer[20];
    double price;

    struct book *Next;
}BookNodeList;

void findwithname(BookNodeList *L);//通过图书名查找图书

void findwithISBN(BookNodeList *L);//通过ISBN查找图书

void findwithwriter(BookNodeList *L);//通过作者查找图书

void addbook(BookNodeList *L);//添加图书

void deletebookwithISBN(BookNodeList *L);//通过ISBN删除图书

void modify(BookNodeList *L);//修改图书信息

void initialize_record(BookNodeList *L);//读取文件信息并且初始化图书链表

void save(BookNodeList *L);//保存图书链表到文件中去

void menu();//菜单

void duqucommand();//读取输入的命令

#endif 
