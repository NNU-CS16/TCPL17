#include<stdio.h>
int main(void)
{
	double a = 2;
	int i;
	double sum = 0;
	for (i=0;i<50;i++)
	{
		sum = sum + a;
		a=a+2;
	}
printf("sum=%f\n",sum);
return 0;
}

