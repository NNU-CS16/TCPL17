 #include "hehe.h"
 void xiugai ()
 {
	int t;
	book* p = duqu ();
	printf ("修改输入1,返回输入0:");
	scanf ("%d", &t);
	while (t)
	{		
		book* head = p;
		char str[50];
		int n;
		printf ("修改的名字:");
		scanf ("%s", str);
		while (strcmp (str, head -> name))
			head = head -> next;
		printf ("1修改名字\t2修改作者\t3修改价格\t0返回\n请输入:");
		scanf ("%d", &n);
		if (n == 1)
			scanf ("%s", head -> name);
		else if (n == 2)
			scanf ("%s", head -> writer);
		else if (n == 3)
			scanf ("%lf", &head -> price);
		printf ("修改输入1,返回输入0:");
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
        fprintf (fp,"\t\t%s\t\t\t%s\t\t\t%d\t\t\t%lf\n", p -> name, p -> writer, p -> ISBN, p -> price);        
        p = p -> next;
    }
    fclose (fp);
 }
