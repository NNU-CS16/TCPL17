#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"kyh.h"
int menu();
int errcmd();
//Code by Yinhu Kang
//依照课本内容 此程序设计了用户与磁盘文件之间的交互层以及数据访问层 参考CSDN博客中DOS界面的C语言图书管理系统并加以改进
//2017.12.13

int booknum;// 定义一个全局变量表示书的数目

#define BOOKNUM 1000 //BOOKNUM宏表示MIS系统可以存储记录的总数

struct Book 
{
    char bookname[50];   //书名
    char author[20];     //作者
    char ISBN[8];        //ISBN码
    double float price;  //价格
    struct Book* next;
};

//typedef struct Book BOOK;//为了方便结构体变量的定义，将struct Book重命名为BOOK

struct Book construct(booknum)
{
    struct Book* head = (struct Book*)malloc(sizeof(struct Book));
    struct Book *shift = NULL;
    shift = head;
    struct Book* newnode;
    int i;
    char str1[50], str2[20], str3[8];
    double float price;
    for (i = 0; i < booknum ;i++ )
    {
        shift = (struct Book*)malloc(sizeof(struct Book));
        printf("请输入书名:");
        gets(str1);
        printf("请输入此书的作者:");
        gets(str2);
        printf("请输入此书的八位ISBN码:");
        gets(str3);
        printf("请输入此书的价格:");
        scanf("%f", &value);
        newnode -> bookname = str1;
        newnode -> author = str2;
        newnode -> ISBN = str3;
        newnode -> price = value;
        shift -> next = newnode;
        shift = newnode;
    }
    return head;
}
int saveAs(struct Book *shift , int size, char * filename)
{
    FILE * fp;
    int i = 0;
    fp = fopen (filename, "w");
    if (fopen == NULL)
    {
        return -1;
    }
    for (i = 0; i < size; i++)
    {
        fprintf(fp, "%s\t", shift -> bookname[50]);
    	fprintf(fp, "%s\t", shift -> author[20]);
	    fprintf(fp, "%s\t", shift -> ISBN[8]);
  	    fprintf(fp, "%s\t", shift -> price);
    	//fprintf(fp, "%s\t", BOOK -> );
  	    //fprintf(fp, "%s\t", BOOK -> );
        shift ++;
    }
    fclose(fp);
    return 0;
}


struct Book * Initial(char str1[50]; char str2[20]; char str3[8]; double float value)
{
    struct Book* newnode;
    newnode = (struct Book*)malloc(sizeof(struct Book));
    newnode -> bookname = str1;
    newnode -> author = str2;
    newnode -> ISBN = str3;
    newnode -> price = value;
    newnode -> next = NULL;
    return newnode;
}









int main()//主函数中设计菜单框架
{
    char cmd, cmd2;
    struct Book* shift;
    do{
    menu();//显示菜单
    cmd = getchar();
    getchar();
    if (cmd == 'q')
    {
        saveAs(shift , booknum, BOOK.csv);
        break;
    
    }
    switch(cmd)
    {
        case 'a':
        printf("请选择你查询图书条目的方式: \n");
        printf("(a)通过ISBN:\n");
        printf("(b)通过书名或书名关键字:\n");
        printf("(c)通过书的作者:\n");
        cmd2 = getchar();
        getchar();
        switch(cmd2)
        {
            case 'a':


            break ;
            case 'b':
            

            break;
            case 'c':
            //

            break;
        }
        break;
        
        case'b':
        printf("请输入你要添加的图书条目:\n");
        //
        break;
        case 'c':
        printf("请输入你要修改的图书条目:\n");
        //
        break;
        case 'd':
        printf("请输入你要删除的图书条目:\n");
        //
        break;
        case 'e':
        printf("****图书条目如下****\n");
        //
        //
        break;
        case 'f':
        printf("****图书记录的统计信息如下****\n");
        //
        //
        break;
        default:errcmd();
    }
    }while(1);

int menu()
{
    printf("===欢迎进入图书管理系统！===\n");
    printf("(a)查询图书条目\n");
    printf("(b)添加图书条目 \n");
    printf("(c)修改图书条目\n");
    printf("(d)删除图书条目\n");
    printf("(e)显示图书条目\n");
    printf("(f)图书记录的统计信息\n");
    printf("(q)退出系统\n");
    return 0;
}

int errcmd()
{
    printf("错误的命令！\n");
    return -1;
}

return 0;
}


