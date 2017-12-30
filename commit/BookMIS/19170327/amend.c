#include "communal.h"
void amend()
{
	int m;
	book* p = read ();
	printf("修改请输入1:\n	返回请输入0：\n");
	scanf("%d",&m);
	while(m)
	{
		book* head = p;
		char str[50];
		int n;
		printf("修改的名字：");
		scanf("%s",str);
		while (strcmp (str, head -> title))
			head = head -> next;
		printf ("1:修改名字\n2:修改作者\n3:修改价格\n0:返回\n请输入:");
		scanf("%d",&n);
		if (n == 1)
			scanf ("%s", head -> title);
		else if (n == 2)
			scanf ("%s", head -> author);
		else if (n == 3)
			scanf ("%s",&head -> price);
		printf("修改输入1	返回输入0:");
		scanf("%d",&m);
	}
	FILE* fp;
	if ((fp = fopen ("book.csv", "w")) == NULL)
	{
		printf ("所询文件不存在\n");
			exit(1);
	}	
	while(p != NULL)
	{
		fprintf (fp,"\t\t%s\t\t\t%s\t\t\t%d\t\t\t%lf\n", p -> title, p -> author, p -> ISBN, p -> price);       
		p = p -> next;
	}
	fclose (fp);
} 
