#include "communal.h"
void query ()
{
	printf("1:书名查询\n	2:作者查询\n	3:ISBN\n	4:退出\n");
	printf("请据需要输入相应数字：");
	int n ,num;
	char str[50], arr[20];
	scanf("%d", &n);
	while (n)
	{
		book* p = read ();
			p = p -> next;
		if (n == 1)
		{
			scanf ("%s", str);
			char* sp;
			while (p != NULL)
			{
				sp = strstr (p -> title, str);
				if(sp != NULL)
					printf ("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> title, p -> author, p -> ISBN, p -> price);  
				p = p-> next;
			}
		}
		else if(n == 2)
		{
			scanf("%s",arr);
			while(p != NULL)
			{
				if (strcmp(arr, p -> author) == 0) 
				printf ("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> title, p -> author, p -> ISBN, p -> price);
				p = p-> next;
			}
		}
		else if(n == 3)
		{
			scanf("%d",&num);
			while(num != p -> ISBN)
				p = p -> next;
			printf ("\t\t%-30s\t%-30s\t%-30d\t%-30lf\n", p -> title, p -> author, p -> ISBN, p -> price);
		}
		else if (n == 4)
			return;
			printf("1:书名查询\n    2:作者查询\n    3:ISBN\n        4:退出\n");
       			printf("请据需要输入相应数字：");
		scanf("%d",&n);
	}
}
