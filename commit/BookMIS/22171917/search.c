#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "head.h"
struct book *search(struct book *head)
{
    char keyword[50];
    char author[20];
    char ISBN[8];
    int j,cmd,mark,flag=0;
    struct book *p;
    p=(struct book *)malloc(sizeof(struct book));
	p=head;
	printf("你想要根据什么查找图书?\n");
	printf("(1)书名;\n");
	printf("(2)作者;\n");
	printf("(3)ISBN;\n");
	printf("请输入对应序号:");
	scanf("%d",&cmd);
	switch(cmd)
	{
	  case 1:
        	printf("请输入书名关键字:");
		scanf(" %[^\n]",keyword);
		int i,temp,len1,len2;
		printf("查询结果:\n");
		while(p!=NULL)
		{
		  len1=strlen(p->name);
		  len2=strlen(keyword);
 		  for(i=0;i<len1;i++)
        		{
		        	mark=0;
				for(temp=i,j=0;j<len2;temp++,j++)
        			if(*(p->name+temp)!=*(keyword+j))
				{
		         		mark=1;
					break;
				}
				if(mark==0)
				{
		        		flag=1;
                 			printf("书名:%s\t作者:%s\tISBN:%s\t价格:%.2lf\n",p->name,p->author,p->ISBN,p->price);
				break;
				}
				}
				p=p->next;
			}
			if(flag==0)
		       	printf("查询无结果!\n");
			break;
		case 2:
			printf("请输入作者名:");
			scanf(" %[^\n]",author);
			printf("查询结果:\n");
			while(p!=NULL)
			{
				if(strcmp(p->author,author)==0)
				{
					printf("书名:%s\t作者:%s\tISBN:%s\t价格:%.2lf\n",p->name,p->author,p->ISBN,p->price);
					flag=1;
				}
				p=p->next;
			}
			if(flag==0)
				printf("查询无结果!\n");
			break;
		case 3:
            printf("请输入待查询书籍的ISBN:");
            scanf(" %[^\n]",ISBN);
            printf("查询结果:\n");
            while(p!=NULL)
            {
                if(strcmp(p->ISBN,ISBN)==0)
                {
                    printf("书名:%s\t作者:%s\tISBN:%s\t价格:%.2lf\n",p->name,p->author,p->ISBN,p->price);
					flag=1;
					break;
                    
             	}
                p=p->next;
            }
				if(flag==0)
                	printf("查询无结果!\n");
            break;
			default:
				printf("Error Command!\n");
	}
	return head;
}
