#include <stdio.h>
int main()
{
	int n,m,sum=0; 
	for(n=1,m=1;n<=10;n++)
	{
	m*=n;
	sum+=m;
	}
	printf("1!+2!+...+10!=%d\n",sum);
	return 0;
}

