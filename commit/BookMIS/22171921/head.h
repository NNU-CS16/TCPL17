#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
define Y 1;
define N 0;
int menu();
{
    int a;
    printf("\n\n   ******************************************************************\n");  
    printf("       *");    
    printf("\t\t欢迎进入图书管理系统");
    printf("\t\t*"); 
    printf("\n     ******************************************************************\n");           
    printf("       *");       
    printf("\t  1.添 加 图 书 信 息");        
    printf("\t\t\t\t\t*\n");   
    printf("       *");       
    printf("\t  2.显 示 图 书 信 息");        
    printf("\t\t\t\t*\n");   
    printf("       *");       
    printf("\t  3.查 询 图 书 信 息");        
    printf("\t\t\t\t*\n");   
    printf("       *");       
    printf("\t  4.删 除 图 书 信 息");        
    printf("\t\t\t\t\t*\n");   
    printf("       *");       
    printf("\t  5.修 改 图 书 信 息");        
    printf("\t\t\t\t*\n");   
    printf("       *"); 
    printf("\t  6.统 计 图 书 信 息");        
    printf("\t\t\t\t*\n");   
    printf("       *");      
    printf("\t  7.退 出       ");             
    printf("\t\t\t\t\t*\n");     
    printf("       ******************************************************************\n");
    printf("请输入你的选择：");
    scanf("%d", &a);
    return a;
}

typedef struct book
{
    char book_name[50];
    char author[20];
    char ISBN8;
    double price;
    struct book* next;
}book;

void read();
void search();
void add();
void delete();
void display();
void statistics();
void modify();

