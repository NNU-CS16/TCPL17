#include "communal.h"
void add ()
{
	int n;
		book* head = read ();
	printf("1:添加\n	2:返回\n");
	scanf("%d,&n");
	while(n)
	{
		char str[50];
		book* p = head;
		book* shell = NULL;
		book* new = (book*)malloc(sizeof(book));
		new -> next = NULL;
		printf("添加的书名为:");
		scanf("%s",str);
		while (strcmp(str, p -> title) >= 0 && p -> next != NULL)
		{
			shell = p;
			p = p -> next;
		}
		printf("请输入添加的内容:");
		scanf ("%s %s %d %lf", new -> title, new -> author, &new -> ISBN, &new -> price);
		new -> next = p;
		shell -> next = new;
		printf("继续添加输入1\n		返回输入0\n");
		scanf("%d",&n);
	}
	FILE* fp;
	if ((fp = fopen ("book.csv", "w")) == NULL)	
	{
		printf("所询文件不存在\n");
		exit (1);
	}
	while (head != NULL)
	{
		fprintf (fp,"\t%s\t%s\t%d\t%lf\n", head -> title, head -> author, head -> ISBN, head -> price);     
		head = head -> next;
	}
	fclose(fp);
}
   
