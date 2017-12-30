#include "main.h"
void ISBN();
void name();
void author();

void Search()
{
	shift = head;
	/*选择查找依据*/
	printf("请选择查找依据:\n");
	printf("(1、ISBN  2、书名  3、作者)\n");
	int choice;
	printf("—————— ");
	scanf("%d", &choice);
	switch(choice)
	{
	  case 1:
	  {
		ISBN();
		break;
	  }
	  case 2:
	  {
		getchar(); //因为后面要用getchar得到输入的书名，所以这里需要用getchar()得到输入2后的回车。
		name();
		break;
	  }
	  case 3: 
	  {
		getchar();
		author();
		break;
	  }
	  default: 
	  {
		printf("输入无效!\n"); 
		break;
	  }
	}
}

/*根据ISBN查找*/
void ISBN()
{
	int c;
	printf("请输入ISBN:\n");
	printf("—————— ");
	scanf("%d", &c); //输入待查找的ISBN。
	while (shift -> ISBN != c && shift != NULL)
	  shift = shift -> next;
	if (shift == NULL)
	  printf("找不到该图书!");
	else
	{
	  printf("图书名: %s  ", shift -> name);
	  printf("作者: %s  ", shift -> author);
	  printf("ISBN: %d  ", shift -> ISBN);
	  printf("标价: %lf\n", shift -> prize);
	}
}

/*根据书名查找*/
void name()
{
	char na[50],c[50];
	printf("请输入书名:\n");
	printf("—————— ");
	int i;
	c[0] = getchar();
	for (i = 0; c[i] != '\n'; ++i)
	  c[i+1] = getchar(); //输入待查找书名。
	c[i] = '\0'; //将数组c1的结束符改为'/0'。
	int len = strlen(c);
	int flag1 = 0, flag2 = 0;
	int j, k = 1;
	while (shift != NULL)
	{
	  strcpy(na, shift -> name); //将链表内书名复制到字符数组na中。
	  for (i = 0; na[i] != '\0'; ++i)
	  {
		if (c[0] == na[i]) //找出na中与c[0]的字符。
		{
		  flag1 = 1;
		  for (j = i+1; j < i+len; ++j) //判断从na[i]开始，后续字符是否与c相同。
		  {
			if (c[k] == na[j])
			{
			  flag1 = 1;
			  k += 1;
			}
			else
			{
			  flag1 = 0;
			  break;
			}
		  } 
		}
		else
		  flag1 = 0;
		if (flag1 == 1)
		{
		  printf("图书名: %s  ", shift -> name);
		  printf("作者: %s  ", shift -> author);
		  printf("ISBN: %d  ", shift -> ISBN);
		  printf("标价: %lf\n", shift -> prize);
		  flag2 = 1; //flag2 = 1，说明可以找到图书。
		  break;
		} //若flag1 == 1，输出该图书信息，同时退出在该条图书信息中查找与c[0]相同的字符的循环。
	  }
	  k = 1;
	  shift = shift -> next; //shift指向下一条图书信息。
	}
	if (flag2 == 0)
	  printf("找不到该图书！\n"); //找遍所有图书后，均不含输入的字符。
}

void author()
{
	char c[20], au[20];
	int i;
	int len;
	printf("请输入要搜索的作者:\n");
	printf("—————— ");
	c[0] = getchar();
	for (i = 0; c[i] != '\n'; ++i)
	  c[i+1] = getchar();
	c[i] = '\0';
	int flag1, flag2 = 1;
	while (shift != NULL)
	{
	  strcpy(au, shift -> author);
	  len = strlen(au);
	  au[len] = '\0';
	  flag1 = strcmp(c, au);
	  if (flag1 == 0)
	  {
		printf("图书名: %s  ", shift -> name);
		printf("作者: %s  ", shift -> author);
		printf("ISBN: %d  ", shift -> ISBN);
		printf("标价: %lf\n", shift -> prize);
		flag2 = 0;
	  }
	  shift = shift -> next;
	}
	if (flag2 == 1)
	  printf("找不到该作者的图书!\n");
}
