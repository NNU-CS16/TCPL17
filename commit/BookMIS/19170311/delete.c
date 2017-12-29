#include<stdio.h> 
#include "control.h"
void Delete ()
{
    int n;;
    book* head = duqu ();
	printf ("确认删除选1,返回选0:");
	scanf ("%d", &n);
	while (n)
	{
		char str[50];
		book* p = head;
		book* f;        
		printf ("删除的名字:");
		scanf ("%s", str);
		while (strcmp (str, p -> name))
		{
			f = p;
			p = p -> next;
		}
		f -> next = p -> next;
		free (p);
		printf ("继续删除选1,返回选0:");
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
        fprintf (fp,"%s %s %d %lf\n", head -> name, head -> writer, head -> ISBN, head -> price);        
        head = head -> next;
    }
    fclose (fp);
 }
