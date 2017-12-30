 #include <stdio.h>
 #include "cmd.h"
 #include <stdlib.h>
 #include <string.h>
 
 int substr(const char *str, const char *substr)
{
    int m;
    for ( ; *str != '\0'; str++)
    {
        if (*str == *substr)
        {
            m = 1;
            for ( ; *substr != '\0'; )
            {
                if (*substr++ != *str++)
                {
                    m = -1;
                    break;
                }
            }
        }
        else
            m = -1;
        if (m != -1)
            break;
    }
    return m;
}
 	

 Book *search(Book *head)
{
	int cmd, i, j, flag = 0, count = 0, k = 0;
	char str1[50], str2[50];
	Book *p;
	Book *pb[10];
	p = head;
	printf("==========================\n");
	printf("  ×××请选择查找方式×××：\n");
	printf("***** 1  ->  查找书名*****\n");
	printf("***** 2  ->  查找作者*****\n");
	printf("***** 3  ->  查找ISBN*****\n");
	printf("×××请选择您喜欢的方法：×××\n");
	scanf("%d", &cmd);
	
	switch (cmd)
	{
		case 1:
			printf("请输入书名或关键字:");
		scanf(" %[^\n]", str1);
		while (p != NULL)
		{
			strcpy(str2, p->name);
			i = substr(str2, str1);
			if (i == 1)
			{
			printf("%s\t\t%s\t%s\t%.2lf\n", p->name, p->author, p->ISBN, p->price);
				flag = 1;
				count++;
				pb[k] = p;
				k++;
				p = p->next;
			}
			else 
				p = p->next;
		}
		if (flag == 0)
            printf("无相关书目，找找其它书籍吧\n");
		break;

		
		case 2:
			printf("请输入作者名称：");
		scanf(" %[^\n]", str1);
		while (p != NULL)
		{
			strcpy(str2, p->author);
			i = substr(str2, str1);
			if ( i == 1)
			{
			printf("%s\t\t%s\t%s\t%.2lf\n", p->name, p->author,p->ISBN,p->price);
				flag = 1;
				count++;
                pb[k] = p;
                k++;
				p = p->next;
			}
			else
				p = p->next;
		}
		if (flag == 0)
			printf("无相关书目，找找其它书籍吧\n");
		break;

		case 3:
			printf("请输入对应的ISBN：");
		scanf("%s", str1);
		while (p != NULL)
		{
			strcpy(str2, p->ISBN);
			i = substr(str2, str1);
			if (i == 1)
			{
			printf("%s\t\t%s\t%s\t%.2lf\n", p->name, p->author, p->ISBN, p->price);
				flag = 1;
				count++;
				pb[k] = p;
				k++;
				p = p->next;
			}
			else 
				p = p->next;
		}
		if (flag == 0)
            printf("无相关书目，找找其它书籍吧\n");
		break;

		default:
			printf("Error Command!\n");
	}
	if (flag == 0)
		return head;
	if (count > 1)
	{
		printf("请选择第几本书：");
		scanf("%d", &j);
		return pb[j-1];
	}
	else 
		return pb[0];
}
