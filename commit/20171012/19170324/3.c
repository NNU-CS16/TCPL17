#include <stdio.h>
int main()
{
	int a,n,i=1;
	int sum=0,t=0;
	printf("a=");
		scanf("%d",&a);
	printf("n=");
		scanf("%d",&n);
	while(i<=n)
	{
	      t=t+a;
	      sum=sum+t;
	      a=a*10;
	      ++i;
	}
	printf("sum=%d\n",sum);

	return 0;
}
