#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,sum=0,i;
	printf("a,n=:");
		scanf("%d%d",&a,&n);
		for(i=2;i<=n;i++)
		{
			a=10*a+a;
			sum=sum+a;
		}
		printf("a+aa+aaa+aaaa.....=%d\n",sum);
		return 0;
}

