#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=0;
	while (a)
	{
	    if (a%2==1)
    	b++;
    	a/=2;
	}
	printf("b=%d",b);
	return 0;
}
