#include<stdio.h>

int add(int n1, int n2)
{
	int s,c,a;
	s=n1^n2;
	c=(n1&n2)<<1;
	while(s&c!=0)
	{
		a=s;
		s=s^c;
		c=(a&c)<<1;		
	}
	return s^c;
}

int main( )
{
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d\n",add(A,B));
	return 0;
}

