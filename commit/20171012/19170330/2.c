#include<stdio.h>
int main()
{
	int i=0,sum=0;
	for (i=1;i<98;i+=3)
	{
		sum+=i*(i+1)*(i+2);
	}
	printf("%d\n",sum);
	return 0;
}
