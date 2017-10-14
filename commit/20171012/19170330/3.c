#include<stdio.h>
int main()
{
	int i,n,a;
	int sum,f;
	printf("Input n and a:\n");
	scanf("%d%d",&n,&a);
	f=a;
	sum=0;
	for(i=1;i<=n;i++)
	{
                sum+=f;
		f=f*10+a;

                printf("%d\n",sum); //check

	}
	printf("%d\n",sum);
	return 0;
}

