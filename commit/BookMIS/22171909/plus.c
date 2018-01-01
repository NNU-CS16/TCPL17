 #include<stdio.h>
 #include "system.h"

 void plus( )
 {  
    int n;
    book* head = read ( );	
    printf ("如需添加项目请输入1,否则返回输入0\n");
    scanf ("%d", &n);
    while(n)
    {   
	char str[50];
        book* p = head;		
	book* shell = NULL;
        book* new = (book*)malloc(sizeof(book));
	new -> next = NULL;        
	printf ("添加的书名:");		 
	scanf ("%s", str);
	while (strcmp(str, p -> name) >= 0 && p -> next != NULL)
	{   			
	     shell = p;
	     p = p -> next;	
	}
	printf ("请输入书名 作者 ISBN 价格: ");
	scanf ("%s %s %d %lf", new -> name, new -> writer, &new -> ISBN, &new -> price);		
	new -> next = p;
	shell -> next = new;
	printf("继续添加请输入1,返回输入0\n");
	scanf ("%d", &n);
    }
    FILE* fp;
    if ((fp = fopen ("book.csv", "w")) == NULL)
    {
        printf ("无法打开文件\n");
        exit (1);
    } 	
    while (head != NULL)
    {                
        fprintf (fp,"\t%s \t%s \t%d \t%lf \n", head -> name, head -> writer, head -> ISBN, head -> price);        
        head = head -> next;
    }
    fclose (fp);
 }
