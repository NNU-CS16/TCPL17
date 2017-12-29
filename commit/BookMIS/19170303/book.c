#include"cmd.h"


//将新链表写入文件中
void fprint(Book *head)
{
    FILE *fp;
    char ch='1';
    Book *p1;
    if((fp=fopen("library.csv","w"))==NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    fputc(ch,fp);
    for(p1=head;p1;p1=p1->next)
      {
        fprintf(fp," %s %s %s %f\n",p1->name,p1->writer,p1->ISBN,p1->price);
      }
    fclose(fp);
}
//从文件中读取图书信息
struct book *load()
{
	struct book *head,*p;
	char line[100];
	FILE *fp;
	if((fp=fopen("library.csv","r"))==NULL)
    	printf("文件打开失败!\n");
	head=(struct book *)malloc(sizeof(struct book));
	if(fgets(line,100,fp)!=NULL)
	{
		sscanf(line,"%[^\t] %[^\t] %[^\t]%f",head->name,head->writer,head->ISBN,&head->price);
	head->next=NULL;
	}
	else 
		return NULL;
	while(fgets(line,100,fp)!=NULL)
	{
		p=head;
		while(p!=NULL)
		{
			if(p->next==NULL)
				break;
			p=p->next;
		}
		struct book *newp=(struct book *)malloc(sizeof(struct book));
		sscanf(line,"%[^\t] %[^\t] %[^\t]%f",newp->name,newp->writer,newp->ISBN,&newp->price);
		p->next=newp;
		newp->next=NULL;
	}
	fclose(fp);
	return head;
}
