#include <stdio.h>
#include <stdlib.h>
#include "head.h"
void file(struct book *head)
{
	FILE *fp;
	Book *p;
	p = head;
	if ((fp = fopen("bookdata.csv", "w")) == NULL)
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
