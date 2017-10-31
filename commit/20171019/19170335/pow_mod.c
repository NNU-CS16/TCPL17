#include <stdio.h>
int main()
{
	long long int a,b,c,i,d;
        long long int p=1;
	scanf("%lld%lld%lld",&a,&b,&c);
	for(i=1;i<=b;i++)
	   p=a*p;

	d=p%c;

	printf("%lld\n",d);

	return 0;
}
