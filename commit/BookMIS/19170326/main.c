#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"baocun.h"
#include"chazhao.h"
#include"function.h"
#include"jiazai.h"
#include"menu.h"
#include"shanchu.h"
#include"tongji.h"
#include"xianshi.h"
#include"xiugai.h"

int main()
{
	int flag = 0;
	char cmd;
	char zimu;
	char bookname[51];
	char author[21];
	char ISBN[9];
	double price;
	FILE *fp = NULL;
	struct Book *head = jiazai();
	struct Book *p = NULL;
	struct Book *newp = NULL;
	while( flag != 1 )
	{
		menu();
		cmd = getchar();
		getchar();
		switch(cmd)
		{
			case 'a':
				printf("选择查找的信息：\n");
				printf("(a)书名	(b)作者	(c)ISBN (d)退出\n");
				zimu = getchar();
				getchar();
				switch(zimu)
				{
					case 'a':
						printf("输入书名：\n");
						scanf("%s",bookname);
						cz_bookname(head, bookname);
						break;
					case 'b':
						printf("输入作者：\n");
						scanf("%s",author);
						cz_author(head,author);
						break;
					case 'c':
						printf("输入ISBN：\n");
						scanf("%s",ISBN);
						cz_ISBN(head,ISBN);
						break;
					case 'd':
						break;
				}
				break;
			case 'b':
				newp=malloc(sizeof(struct Book));
				printf("输入书名：\n");
				scanf("%s",newp->bookname);
				printf("输入作者：\n");
				scanf("%s",newp->author);
				printf("输入ISBN：\n");
				scanf("%s",newp->ISBN);
				printf("输入价格：\n");
				scanf("%lf",&newp->price);
				head = insert(head, newp);
				fp = fopen("book.csv","a");
				if( fp == NULL )
				{
					printf("无法打开文件！\n");
					exit(1);
				}
				fprintf(fp,"%s,",newp->bookname);
				fprintf(fp,"%s,",newp->author);
				fprintf(fp,"%s,",newp->ISBN);
				fprintf(fp,"%lf,",newp->price);
				fclose(fp);
				break;
			case 'c':
				printf("输入修改的图书的ISBN：\n");
				scanf("%s",ISBN);
				p = search(head, ISBN);
				head = xiugai(head, p);
				break;
			case 'd':
				printf("输入删除的图书的ISBN：\n");
				scanf("%s",ISBN);
				p = search(head, ISBN);
				if( p == NULL )
					printf("ISBN不存在！\n");
				else
				{
					head=shanchu(head, p);
					printf("删除成功！\n");
				}
				break;
			case 'e':
				xianshi(head);
				break;
			case 'f':
				tongji(head);
				break;
			case 'g':
				flag = 1;
				baocun(head);
				break;
			default:
				errCmd();
		}
	}
	return 0;
}				
