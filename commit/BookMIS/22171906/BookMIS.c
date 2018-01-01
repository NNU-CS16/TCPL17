#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Book.h"

void menu()
{
	printf("Welcome to BookMIS.\n");
	printf("==================================\n");
	printf("(1) Search\n");
	printf("(2) Add\n");
	printf("(3) Delete\n");
	printf("(4) Change\n");
	printf("(5) List\n");
	printf("(6) Qeport\n");
	printf("(0) Quit\n");
	printf("==================================\n");
	printf("please input number: ");
		
}

int errCmd()
{
	printf(" error number!\n");
	return -1;
}

int main()
{
	struct book *head;
	head = load();
    	char cmd;

	do{
		menu();
		cmd = getchar();
		getchar();
		if (cmd == '0')
                break;
		switch (cmd)
			{
			case '1':
			printf("Search\n");
			Search(head);
			break;
                  	
			case '2':
			printf("Add\n");
			head = add(head);
			break;
			
			case '3':
			printf("Delete\n");
			head = cut(head);
			break;
				  
			case '4':
			printf("Change\n");
			change(head);
			break;
				  
			case '5':
			printf("List\n");
			paixu(head);
			break;
				  
			case '6':
			printf("Report\n");
			report(head);
			break;
			default:errCmd();
			}
	}while (1);
	keep(head);
	printf("ok\n");
return 0;
}

