#include<stdio.h>
int main()
{
	long int i,n=1,p=0;
	for(i=1;i<=10;i++)
	{
		n*=i;
		p+=n;
	}
	printf("%ld\n",p);
	return 0;
}

