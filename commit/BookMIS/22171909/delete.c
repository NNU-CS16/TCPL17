 #include<stdio.h> 
 #include "system.h"

 void Delete ()
 {
    int n;
    book* head = read ();
    printf ("确定要删除请输入1, 返回输入0:");
    scanf ("%d", &n);
    while (n)
    {
	char str[50];
	book* p = head;
	book* f;        
	printf ("要删除的书名: ");
	scanf ("%s", str);
	while (strcmp (str, p -> name))
	{
	       f = p;
	       p = p -> next;
	}
	f -> next = p -> next;
	free (p);
	printf ("如果需要继续删除请输入1, 返回输入0:");
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
        fprintf (fp, "%s %s %d %lf\n", head -> name, head -> writer, head -> ISBN, head -> price);        
        head = head -> next;
   }
   fclose (fp);
 }
