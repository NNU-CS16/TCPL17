#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "cmd.h"



int menu();

int err();



int main()

{

	book* head=Load();

	book* pi,*p;

	int n=0;

	char b;

	char title[50];

	char author[20];

	char ISBN[8];

	do

	{

		menu();

		b=getchar();

		getchar();

		if(b=='Q')

		{

			Save(head);

			break;

		}

		switch(b)

		{

			case 'I':

				printf("& Please input the ISBN &: ");

				scanf("%s",ISBN);

				p=head;

				pi=SearchISBN(p,ISBN);

				if(pi==NULL)

				{

					printf("Can not find!!!\n");

				}

				else

					BookPuts(pi);

				break;

			case 'T':

				Searchtitle(head);

				break;

			case 'a':

				Searchauthor(head);

				break;

			case 'A':

				Add(head);

				break;

			case 'U':

				Update(head);

				break;

			case 'D':

				Delete(head);

				break;

			case 'P':

				printf("=======全部图书信息=======\n");

				List(head);

				break;

			case 'R':

				printf("======图书统计 ======\n");

				Report(head);

				break;

			default:err();



		}

	}while(1);



}



int menu()

{

	printf("************&&&&&&&&&&************\n");

	printf("#                                #\n");

	printf("#      ====图书管理系统====      #\n");

	printf("#                                #\n");

	printf("#                                #\n");

	printf("#      (I)   按ISBN查找图书      #\n");

	printf("#      (T)   按书名查找图书      #\n");

	printf("#      (a)   按作者查找图书      #\n");

	printf("#      (A)   添加图书条目        #\n");

	printf("#      (U)   修改图书条目        #\n");

	printf("#      (D)   删除图书条目        #\n");

	printf("#      (P)   显示所有图书条目    #\n");

	printf("#      (R)   显示图书统计情况    #\n");

	printf("#      (Q)   退出系统            #\n");

	printf("#                                #\n");

	printf("************$$$$$$$$$$************\n");

	printf("& 输入命令 &：");

	return 0;

}



int err()

{

	printf("!!!Error Command!!\n");

	return -1;

}
