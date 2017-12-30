#include <stdio.h>
#include <stdlib.h>
#include "alg.h"
int Menu();
int err();
int main()
{
    struct Book *head = creat();
    struct Book *newp;
    char Bname[50];
    char Wname[20];
    char ISBN[8];
    double Bprice;
    int choice;
    int choi;
    int choe;
    while (1)
    {
    	choice = Menu();
        printf("the choice");
        scanf("%d",&choice);
    	if (choice == 0)    break;
    	switch(choice)
    	{
        	case 1:
        	printf("the choi:");
 			scanf("%d",&choi);
        	search(head,choi);
        	break;
            case 2:
			newp=(struct Book *)malloc(sizeof(struct Book));
            head=insert(head,newp);
            show(head);
			break;
            case 3:
            scanf("%s%s%s%lf",Bname,Wname,ISBN,&Bprice);
            delete(head,Bname,Wname,ISBN,Bprice);
            show(head);
            break;
            case 4:
            show(head); 
			break; 
            case 5:
            scanf("%d%s",&choe,ISBN);
            change(head,choe,ISBN);
            case 6:
            report(head);
            break;      
			default:err();
    	}
	}
}
int Menu()
{
    int choice;
    scanf("%d",&choice);
    printf("dengdengdeng\n");
    printf("***balalalalala***\n");
    printf("1.***.search\n");
    printf("2.***.insert\n");
    printf("3.***.delete\n");
    printf("4.***.show\n");
    printf("5.***.change\n");
    printf("6.***.report\n");
    printf("***balabalabala***\n");
    return 0;
}
int err()
{
    printf("error command!\n");
    return -1;
}
