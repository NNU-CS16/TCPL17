#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int str[4];
	int i, j, temp;
	int a, b, c;
	printf("请输入一个四位正整数:");
	scanf("%d",&c);
	for (i = 0; i <= 3; ++i)
	  str[i] = (int)(c / pow(10,i)) % 10;
	if (str[0] == str[1] && str[1] == str[2] && str[2] == str[3])
	  printf("%d%d%d%d - %d%d%d%d = 0000\n",str[0], str[0], str[0], str[0], str[0], str[0], str[0], str[0]);
	else
	  while (1)
	  {
		for (j = 0; j < 3; ++j)
		  for (i = 0; i < 3-j; ++i)
			if (str[i] < str[i+1])
			{
			  temp = str[i];
			  str[i] = str[i+1];
			  str[i+1] = temp;
			}
		a = 1000 * str[0] + 100 * str[1] + 10 * str[2] + str[3];
		b = 1000 * str[3] + 100 * str[2] + 10 * str[1] + str[0];
		c = a - b;
		printf("%04d - %04d = %04d\n", a, b, c);
		for (i = 0; i <= 3; ++i)
		  str[i] = (int)(c / pow(10,i)) % 10;
		if (str[0] == 4 && str[1] == 7 && str[2] == 1 && str[3] == 6)
		  break;
	  }
	return 0;
} 
