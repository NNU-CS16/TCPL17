#include <stdio.h>
#include <stdlib.h>
#include "a.h"
int Menu()
{
    int choice;
	printf("0...退出\n");
    printf("1....creat\n");
    printf("2....search\n");
    printf("3....insert\n");
    printf("4....modification\n");
    printf("5....delete\n");
    printf("6....output\n");
    printf("7....analyse\n");
	printf("8....保存\n");
    scanf("%d",&choice);
    return choice;
}
int main()
{
	int choice;
	struct Book *head = NULL;
	while(1)
	{
		choice = Menu();
		if (choice == 0)    break;
		switch(choice)
		{
			case 1:
				head = creat();		break;
			case 2:
				search(head);		break;
			case 3:
				head = insert(head);		break;
			case 4:
				head = modification(head);    break;
			case 5:
				head = Delete(head);	
				output(head);	break;
			case 6:
				output(head);	break;
			case 7:
				analyse(head);	break;
			case 8:
				baocun(head);	break;
		}
	}
	return 0;
}
