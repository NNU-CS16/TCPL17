#include<stdio.h>
#include"head.h"
void save(struct book *head)
{
	FILE *fp;
	fp=fopen("books.csv","w");
	if(fp==NULL)
		printf("文件保存失败!");
	while(head!=NULL)
	{
		fprintf(fp,"%s\t",head->name);
		fprintf(fp,"%s\t",head->author);
		fprintf(fp,"%s\t",head->ISBN);
		fprintf(fp,"%.2lf\t",head->price);
		fprintf(fp,"%d",head->num);
		fprintf(fp,(head->next)==NULL ? "":"\n");
		head=head->next;
	}
	fclose(fp);
}
