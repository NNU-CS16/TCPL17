#include <stdio.h>
int main()
{
	int a,n,sum;
	for(a=1,n=2,sum=1;n<=10;++n)
	{
		a*=n;
		sum=sum+a;
	}

 
	printf("1!+2!+3!+...+10!=%d\n",sum);

		return 0;
}
