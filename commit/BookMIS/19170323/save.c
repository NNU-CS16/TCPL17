 #include <stdio.h>
 #include "cmd.h"
 #include <stdlib.h>

 Book *save(Book *head)
{
	FILE *fp;
	Book *p;
	p = head;
	if ((fp = fopen("book.csv", "w")) == NULL)
	{
		printf("打开文件失败!\n");
		exit(1);
	}
	
	while (p != NULL)
	{
		fprintf(fp, "%s\t", p->name);
		fprintf(fp, "%s\t", p->author);
		fprintf(fp, "%s\t", p->ISBN);
		fprintf(fp, "%.2lf\n", p->price);
		p = p->next;
	}
	fclose(fp);
	return head;
}
