 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <math.h>
 #define yes 1
 #define no 0
 #define yemian "\t\t\t\t\t\t\t\t\t\t功能\n\t\t\t\t\t(1) 查询图书条目\t\t\t\t\t\t(2) 添加图书条目\n\t\t\t\t\t(3) 修改图书条目\t\t\t\t\t\t(4) 删除图书条目\n\t\t\t\t\t(5) 显示图书条目\t\t\t\t\t\t(6) 图书记录的统计信息\n"
 typedef struct book
 {
    char name[50];
    char writer[20];
    int ISBN;
    double price;
    struct book* next;
 }book; //创建图书信息   因为gets函数会有警告，所以用的%S表示字符串，“-”代表空格
 void chaxun ();//查询
 void tianjia ();//添加
 void xiugai ();//修改
 void shanchu ();//删除
 void xianshi ();//显示
 void tongji ();// 统计
 book* duqu ();//读取到链表
