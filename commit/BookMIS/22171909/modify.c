 #include<stdio.h>
 #include "system.h"
 void modify( )
 {
  int t;
  book* p = read ();
  printf ("修改项目请输入1,返回输入0: ");
  scanf ("%d", &t);
  while (t)
  {		
	book* head = p;
	char str[50];
	int n;
	printf ("要修改的书名: ");
	scanf ("%s", str);
	while (strcmp (str, head -> name))
	head = head -> next;
	printf ("修改名字请输入1，修改作者请输入2，修改价格请输入3，返回请输入0 请输入:");
	scanf ("%d", &n);
	if (n == 1)
	   scanf ("%s", head -> name);
	else if (n == 2)
	   scanf ("%s", head -> writer);
	else if (n == 3)
	   scanf ("%lf", &head -> price);
	printf ("继续修改请输入1, 返回输入0:");
	scanf ("%d", &t);
  }
  FILE* fp;
  if ((fp = fopen ("book.csv", "w")) == NULL)
  {
     printf ("无法打开文件\n");
     exit (1);
  } 
  while (p != NULL)
  {                
        fprintf (fp, "%s %s %d %lf\n", p -> name, p -> writer, p -> ISBN, p -> price);        
        p = p -> next;
  }
    fclose (fp);
 }
