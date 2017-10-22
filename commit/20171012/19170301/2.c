#include<stdio.h>
int main()
{
	int n,t,s=0;
	for(n=1;n<=97;n++)
	{
		t=n*(n+1)*(n+2);
		s+=t;
	}
	printf("%d\n",s);
	return 0;
}
