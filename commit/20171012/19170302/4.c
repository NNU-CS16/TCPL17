#include<stdio.h>
int main()
{
	int p=1,sum=0,i;
	for(i=1;i<=10;i++)
	{
		p=p*i;
		sum=sum+p;
	}
	printf("1!+2!+3!+....+10!=%d\n",sum);
	return 0;
}
