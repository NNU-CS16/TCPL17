#include "main.h"
void swap(char a[], char b[]);

void Show()
{
	shift = head;
	/*根据书名给图书信息排序*/
	char na[sum][50];
	int i = 0, j;
	int len;
	while (shift != NULL)
	{
	  strcpy(na[i], shift -> name); //将链表中的书名复制到数组na[i]中。
	  len = strlen(na[i]); 
	  na[i][len+1] = '\0'; //将数组na[i]的结束符设为'\0'。
	  strcpy(shift -> name, na[i]); //将shift -> name的结束符也设为'\0'。
	  i += 1;
	  shift = shift -> next;
	}

	for (i = 0; i < sum-1; ++i)
	  for (j = 0; j < sum-1-i; ++j)
	  {
		if (strcmp(na[j], na[j+1]) > 0)
		  swap(na[j], na[j+1]);
	  } //对图书排序。
	
	/*输出图书信息*/
	for (i = 0; i < sum; ++i)
	{
	  shift = head;
	  while (shift != NULL)
	  {
		if (strcmp(na[i], shift -> name) == 0)
		{
		  printf("%s  ", shift -> name);
		  printf("%s  ", shift -> author);
		  printf("%d  ", shift -> ISBN);
		  printf("%lf\n", shift -> prize);
		  break;
		}
		shift = shift -> next;
	  }
	}
}

void swap(char a[], char b[])
{
	char new[50];
	strcpy(new, a);
	strcpy(a, b);
	strcpy(b, new);
}
