#include "main.h"

void Count()
{
	/*统计图书数目*/
	printf("图书书目: %d\n", sum);
	
	/*统计作者数目*/
	shift = head;
	char au1[sum][50], au2[sum][50];
	int i, j;
	int len;
	int k = 0;
	int flag;
	for (i = 0; shift != NULL; ++i)
	{
	  strcpy(au1[i], shift -> author);
	  len = strlen(au1[i]);
	  au1[i][len] = '\0'; //将au1的结束符设为'\0'。
	  shift = shift -> next;
	}
	for (i = 0; i < sum; ++i)
	{
	  for (j = i+1; j < sum; ++j)
	  {
		if (strcmp(au1[i], au1[j]) != 0)
		  flag = 1;
		else
		{
		  flag = 0;
		  break;
		}
	  }
	  if (flag == 1)
		k += 1;
	} //避免同一个作者有多本图书时该作者被重复数入。
	printf("作者数目: %d\n", k);
	
	/*统计价格最高的图书*/
	printf("%p", head);
	shift = head;
	double p[sum];
	double mp;
	for (i = 0; shift != NULL; ++i)
	{
	  p[i] = shift -> prize;
	  printf("%lf ", p[i]);
	  shift = shift -> next;
	}
	for (i = 0; i < sum-1; ++i)
	  for (j = 0; i < sum-i-1; ++j)
	  {
		if (p[j] > p[j+1])
		  mp = p[j];
		else
		  mp = p[j+1];
	  } //找出最高的图书价格。
	while (shift != NULL)
	{
	  if (mp == shift -> prize)
	  {
		printf("价格最高的图书：%s  ", shift -> name);
		printf("作者：%s  ", shift -> author);
		printf("ISBN: %d  ", shift -> ISBN);
		printf("价格：%lf  ", shift -> prize);
		break;
	  }
	  else
		shift = shift -> next;
	}
}
