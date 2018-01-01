#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "head.h"
void print()
{
	printf("**********************\n");
}
void menu()
{
	print();
	printf("*    Please choose   *\n");
	print();
        printf("*     a:查询图书;      *\n*     b:添加图书;      *\n*     c:修改图书;      *\n*     d:删除图书;      *\n*      e:显示;       *\n*      f:统计;       *\n");
	printf("*      q:退出;       *\n");
	print();
}
int main()
{
	char t;
        Book *head = (Book*)malloc(sizeof(Book));
	head = Searchbook(head);
	print();
	printf("*     BookMIS     *\n");
        print();
	menu();
	while (t != 'q')
	{
		t = getchar();
		switch(t)							                {
			case'a':Searchbook(head);
                                printf("over!\n");
                                menu();
                                break;
			case'b':Addbook(head);
				printf("ok\n");
				menu();
				break;
			case'c':Changebook(head);
				printf("ok\n");
				menu();
				break;
			case'd':Deletebook(head);
				printf("ok\n");
				menu();
				break;
			case'e':Showbook(head);
				printf("ok\n");
				menu();
				break;
			case'f':Countbook(head);
				printf("ok\n");
			        menu();
				break;
			case'q':break;
			default:break;
		}
	}
	return 0;
}


