 #include <stdio.h>
 #include "cmd.h"
 #include <stdlib.h>
 #include <string.h>

 struct auth
 {
	int num;
	char zuozhe[20];
 };
 void tongji(Book *head)
{
	Book *p, *pre;
	char *pz[20];
	int i, count1 = 0, count2= 0, count3 = 0, j, k = 0, flag = 0, max = 0, min;
	//书的本数;
	p = head;
	while (p != NULL)
	{
		count1++;
		p = p->next;
	}
	p = head;
	printf("*******************************\n");
	printf("===书的本数为：%d本\n", count1);
	
	//作者数目;
	while (p != NULL)
	{
		if (k == 0)
		{
			pz[k] = p->author;
			k++;
			p = p->next;
			continue;
		}
		for (i = 0; i < k; i++)
		{
			if (strcmp(p->author, pz[i]) == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			flag = 0;
			p = p->next;
			continue;
		}
		else
		{
			pz[k] = p->author;
			k++;
			p =p->next;
		}
	}
	printf("===作者数目为%d个\n", k);
	p = head;

	//拥有图书最多的作者;
	struct auth auary[20];
	struct auth *t;
	for (i = 0; i < k; i++)
	{
		while (p != NULL)
		{
			if (strcmp(pz[i], p->author) == 0)
				count2++;
			p = p->next;
		}
		auary[i].num = count2;
		strcpy(auary[i].zuozhe, pz[i]);
		count2 = 0;
		p = head;
	}
	for (i = 0; i < k; i++)
	{
		if (auary[i].num > max)
		{
			max = auary[i].num;
			t = &auary[i];
		}
	}
	printf("===拥有图书最多的作者为:");
	for (i = 0; i < k; i++)
	{
		if (auary[i].num == max)
			printf("%s，拥有%d本;", auary[i].zuozhe, max);
	}
	printf("\n");
    
	//价格最高与最低的图书;
	
	max = 0;
	p = head;
	while (p != NULL)
	{
		if (p->price > max)
		{
			max = p->price;
		}
		p = p->next;
	}
	p = head;
	printf("===价格最高的图书为：");
	while (p != NULL)
	{
		if (p->price == max)
			printf("%s价值%.2lf; ", p->name, p->price);
		p = p->next;
	}
	printf("\n");
	p = head;
	min = p->price;
	while (p != NULL)
	{
		if (p->price < min)
		{
			min = p->price;
			pre = p;
		}
		p = p->next;
	}
	p = head;
	printf("===价格最低的图书为：");
	while (p != NULL)
	{
		if (p->price == min)
			printf("%s价值%.2lf; ", p->name, p->price);
		p = p->next;
	}
	p = head;
	printf("\n");
	printf("*******************************");
    printf("\n\n");
}
		
