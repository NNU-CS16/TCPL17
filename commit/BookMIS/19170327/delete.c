#include "communal.h"
void delete ()
{
	book *p=read ();
	book *f = p;
	int need = 1;
	int ISBN;	
	while(need)
	{
		printf("请输入您想要删除图书的ISBN值:");
		scanf("%d",&ISBN);
		struct book *prev=NULL;
		printf("\n");
		while(p != NULL)
		{
			if(p -> ISBN == ISBN)
				break;
			prev=p;p=p->next;
		}	
		if (p == NULL)
			printf("您想要删除的图书不存在\n");
		if (p == f)
		{
			f = f -> next;
			printf("删除成功\n");
		}	
		else
		{
		prev->next=p->next;
		printf("删除成功\n");
		}
		printf("继续删除输入1	退出输入0\n");
		scanf("%d", &need);
	}
	FILE *fp;
	if((fp = fopen("book.csv","w")) == NULL)
	{
		printf("所询图书不存在");
		exit(1);
	}
	while(f != NULL)
	{
		fprintf(fp,"%-30s%-20s\t%d\t%lf\n",f -> title,f -> author,f -> ISBN,f -> price);
		f = f -> next;
	}
	fclose(fp);
}


