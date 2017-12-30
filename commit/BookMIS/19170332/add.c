#include<stdio.h>
#include "start.h"
void add()
{
    int n;
	book* head = duqu ();	
    printf ("添加输入1,返回输入0\n");
    scanf ("%d", &n);
    while(n)
    {   
		char str[50];
        book* p = head;		
		book* shell = NULL;
        book* new = (book*)malloc(sizeof(book));
		new -> next = NULL;        
		printf ("添加的名字:");		 
		scanf ("%s", str);
		while (strcmp(str, p -> name) >= 0 && p -> next != NULL)
		{   			
			shell = p;
			p = p -> next;	
		}
		printf ("请输入添加的内容:");
		scanf ("%s %s %d %lf", new -> name, new -> writer, &new -> ISBN, &new -> price);		
		new -> next = p;
		shell -> next = new;
		printf("继续添加输入1,返回输入0\n");
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
        fprintf (fp,"\t%s\t%s\t%d\t%lf\n", head -> name, head -> writer, head -> ISBN, head -> price);        
        head = head -> next;
    }
    fclose (fp);
 }
