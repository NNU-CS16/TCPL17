#include <stdio.h>
int main()
{
	int n,a,b=1;
	scanf("%d",&n);
	for (a=1; a<=n; a++)
	{
    	b*=a;
	}
	int c,x=0;
	for (c=10; b<=1; x++)
	{
    	b/=10;
	}
    printf("%d\n",x);
	return 0;
}

