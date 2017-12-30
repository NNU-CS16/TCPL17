    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <math.h>
    typedef struct Book
    {
        char name[50];
	char writer[20];
        char ISBN[8];
	double price;
	struct Book* next;
    }Book;//创建图书信息
    void chaxun();//查询
    void tianjia();//添加
    void xiugai();//修改
    void shanchu();//删除
    void xianshi();//显示
    void tongji();// 统计
    Book* zhibiao();//读取到链表
