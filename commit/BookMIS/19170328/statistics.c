#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kyh.h"
struct Author
{
	char bookname[20];
	int booknum;
};
void statistics(struct book *head)
{	
	int num1=0,num2=0,n=0,i,flag;
	struct book *min=(struct book *)malloc(sizeof(struct book));
	struct book *max=(struct book *)malloc(sizeof(struct book));
	struct book *p=(struct book *)malloc(sizeof(struct book));
	p=head;
	min=p;
	max=p;
	while(p!=NULL)
	{
		if((p->price) > (max->price))
			max=p;
		if((p->price) < (min->price))
            min=p;
		num1+=p->booknum;
		num2++;
		p=p->next;
	}
	struct Author Amax,a[num2];
	p=head;
	while(p!=NULL)
	{
		flag=0;
		for(i=0;i<n;i++)
		{
			if(strcmp(a[i].bookname,p->author)==0)
			{
				flag=1;
				a[i].booknum++;
				break;
			}
		}
		if(flag==0)
		{
			strcpy(a[n].bookname,p -> author);
			a[n].booknum=1;
			n++;
		}
		p=p->next;
	}
	Amax=a[0];
	for(i=0;i<n;i++)
		if(a[i].booknum>Amax.booknum)
			Amax=a[i];
	printf("总图书数目:%d本\n",num1);
	printf("总图书种类数:%d种\n",num2);
	printf("总作者数目:%d个\n",n);
	printf("拥有图书最多的作者是:");
	for(i=0;i<n;i++)
		if(a[i].booknum == Amax.booknum)
			printf("%s , ",a[i].bookname);
	printf("各自拥有%d本书\n",Amax.booknum);
	printf("价格最高的图书:");
	for(p=head;p!=NULL;p=p->next)
        if((p->price) == (max->price))
			printf("《%s》,",p->bookname);
	printf("价格为:%.2lf\n",max->price);
	printf("价格最低的图书:");
	for(p=head;p!=NULL;p=p->next)
		if((p->price) == (min->price))
           	printf("《%s》,",p->bookname);
	printf("价格为:%.2lf\n",min->price);
}
