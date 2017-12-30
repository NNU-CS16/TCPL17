#include "communal.h"
void stat ()
{
	struct book *p=main();
        struct book *p2=p;
        struct book *p3=p;
        struct book *p4=p;
        struct book *p5=p;
        struct book *p6=p;
        struct book *p7=p;
        int count1=0,count2=0;
	while(p != NULL)
	{
		count1++;
		p = p -> next;
	}
	printf("共有%d本书\n", count1);
	struct book *f = NULL;
	count2 = count1;
	while (p4 != NULL)
	{
		f = p4;
		p4 = p4 -> next;
		while(p4 != NULL)
		{
		if(strcmp(f -> author,p4 -> author) == 0)
		{
			count2--;
			break;
		}	
		p4 = p4 -> next;
		}
		p4 = f -> next;
	}
	printf("共有%d个作者\n",count2);
	int m = 0, n = 1;
	while(p5 != NULL)
	{
		f = p5;
		p6 = f -> next;
		while(p6 != NULL)
		{
	
			if(strcmp(f -> author,p6 -> author) == 0) 

			{	
				n++;
			}
			p6 = p6 -> next;
		}	
		if(n > m)
		{	
			m = n;
			p7 = f;
		}
		n = 1;
		p5 = p5 -> next;
	}
	printf ("拥有图书数量最多的作者为%s\n",p7 -> author);
	
	double high,low;
	high = p2 -> price;
	p2 = p2 -> next;
	while(p2 != NULL)
	{
		if(p2 -> price > high)
			high = p2 -> price;
		else 
			p3 = p3 -> next;
	}
	printf("价格最低的图书为%lf\n",low);
}
	
		 
