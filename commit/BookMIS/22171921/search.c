#include"head.h"

void search()
{
    int i;
    char a[50], b[20], c[8];
    printf("\t  1.书名查询");
    printf("\t\t\t\t*\n");
    printf("       *");
    printf("\t  2.作者查询");
    printf("\t\t\t\t*\n");
    printf("       *");
    printf("\t  3.ISBN查询");
    printf("\t\t\t\t*\n");
    printf("       *");
    printf("\t  0.退 出");             
    printf("\t\t\t\t\t*\n");
    printf("请输入：");
    scanf("%d", &i);
    while(i)
    {
		book* p = read();
		p = p -> next;
		if (i == 1)
		{
	    	scanf("%s", a);
	    	char* j;
	    	while(p != NULL)
	    	{
				j = strstr(p -> book_name, a);
				if (j != NULL)
				    printf("\t\t%-30s\n\t\t%-30s\n\t\t%-30s\n\t\t%-30lf\n", p -> book_name, p -> author, p -> ISBN, p -> price);
		   			p = p -> next;
	    	}
		}
		if (i == 2)
		{
	    	scanf("%s", b);
	    	while(p != NULL);
	    	{
				if (strcmp(b, p -> author) == 0)
		    		printf("\t\t%-30s\n\t\t%-30s\n\t\t%-30s\n\t\t%-30lf\n", p -> book_name, p -> author, p -> ISBN, p -> price);
		    		p = p -> next;
	    	}
		}
		if (i == 3)
		{
	   		scanf("%s", c);
	    	while(p != NULL)
	   		{
				if (strcmp(c, p -> ISBN) == 0)
		    		printf("\t\t%-30s\n\t\t%-30s\n\t\t%-30s\n\t\t%-30lf\n", p -> book_name, p -> author, p -> ISBN, p -> price);
		    		p = p -> next;
			}
		}
		if (i == 0)
	    	return;
    		printf("\t  1.书名查询");
     		printf("\t\t\t\t*\n");
        	printf("       *");
       		printf("\t  2.作者查询");
	   		printf("\t\t\t\t*\n");
   			printf("       *");
   			printf("\t  3.ISBN查询");
    		printf("\t\t\t\t*\n");
  	   		printf("       *");
  	   		printf("\t  0.退 出");             
   	   		printf("\t\t\t\t\t*\n");
       		printf("请输入：");
   			scanf("%d", &i);
    }
}

