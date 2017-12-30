#include "main.h"

int main()
{
	head = LoadArray();
	/*图书管理系统*/
	printf("\n");
	printf("============================= 》》图书管理系统《《 =============================\n\n");
	while (1)
	{
	  /*分割线*/
	  printf("\n");
	  printf("》》》》》》》》****************************************************************\n\n"); 
	  printf("Please select the operation you want to do:\n");
	  printf("(A Search  B Add  C Modify  D Delete  E Show  F Count  0 退出)\n");
	  printf("—————— ");
	  char choice;
	  scanf("%c", &choice);
	  getchar();
	  printf("\n");
	  if (choice == '0')
		break;
	  switch(choice)
	  {
		case 'A': Search();
				  break;
		case 'B': Add();
			  	  break;
		case 'C': Modify();
			  	  break;
		case 'D': Delete();
				  break;
		case 'E': Show();
				  break;
		case 'F': Count();
				  break;
		default : break;
	  }
	}

	return 0;
}
