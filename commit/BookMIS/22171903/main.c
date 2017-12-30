#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alg.h"
	
int menu();
int err();
	
int main()
{
    book* head = load();
    book* pi,* p;
    int n = 0;
    char a;
    char isbn[8];
    do
    { 
     	menu();
	a = getchar();
	getchar();
	if (a == 'q')
	{
	    save(head);
	    break;
	}
	switch(a)
	{
	    case 'i':
	    	printf("# 输入ISBN #：");
	    	scanf("%s", isbn);
	    	p = head;
	    	pi = searchisbn(p, isbn);
	    	if (pi == NULL)
		    printf("!!! 未找到 !!!\n");
	    	else
		    bputs(pi);
	    	break;
	    case 'n':
		searchnam(head);
		break;
	    case 'a':
		searchaut(head);
		break;
	    case 'c':
		head = insert(head);
		break;
	    case 'u':
		head = update(head);
		break;
	    case 'd':
		head = delete(head);
		break;
	    case 'p':
		printf("======图书全部信息======\n");
		list(head);
		break;
	    case 'r':
		printf("======图书统计报表======\n");
		report(head);
		break;
	    default:err();
	}
    }while (1);
}
	
	
int menu()
{
    printf("*************@@@@@@@@@@@@************\n");
    printf("#                                   #\n");
    printf("#    ========图书管理系统=======    #\n");
    printf("#                                   #\n");
    printf("#   (i)  按ISBN查找书目             #\n");
    printf("#   (n)  按书名查找书目             #\n");
    printf("#   (a)  按作者查找书目             #\n");
    printf("#   (c)  添加图书条目               #\n");
    printf("#   (u)  修改图书条目               #\n");
    printf("#   (d)  删除图书条目               #\n");
    printf("#   (p)  打印所有图书条目           #\n");
    printf("#   (r)  显示图书统计报表           #\n");
    printf("#   (q)  退出系统                   #\n");
    printf("#                                   #\n");
    printf("*************~~~~~~~~~~~~************\n");
    printf("# 输入命令 #: ");
    return 0;
}
	
	
int err()
{
    printf("!!! Error Command !!!\n");
    return -1;
}
