#include<stdio.h>
#include<stdlib.h>
#include"function.h"
int main()
{
	char ch;
	printf("\tWelcome to this Book Management system!\n\n");
	printf("\t\tFunctions are as follows:\n");
	printf("\t\tPlease input 's' to search;\n");
	printf("\t\tPlease input 'a' to add;\n");
	printf("\t\tPlease input 'r' to revise;\n");
	printf("\t\tPlease input 'd' to delete;\n");
	printf("\t\tPlease input 'p' to print;\n");
	printf("\t\tPlease input 'c' to count;\n");
	printf("\t\tPlease input 'q' to quit.\n");
	while(1)
	{
		printf("\t\tPlease input your order:");
		ch=getchar();
		if(ch=='s')
			getchar();
		printf("\n");
		switch(ch)
		{
			case 's':Search();break;
			case 'a':Add();break;
			case 'r':Revise();break;
			case 'd':Delete();break;
			case 'p':Print();break;
			case 'c':Count();break;
			case 'q':exit(1);break;
			default:printf("\t\tSorry,we don't have such function!");
		}
		getchar();
		printf("\n");
	}
	return 0;
}
