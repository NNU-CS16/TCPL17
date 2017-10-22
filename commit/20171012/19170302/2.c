#include<stdio.h>
int main()
{
	int sum=0,n,p;
	for(n=1;n<=97;n+=3)
	{	p=n*(n+1)*(n+2);
                sum=sum+p;
	}
	printf("1*2*3+4*5*6+.....+97*98*99=%d\n",sum);
	return 0;
}
