#include<stdio.h>
int main()
{
	int n,a,i;
	int N=0; int sum=0;

	scanf("%d,%d",&n,&a);

	for(i=1;i<=n;i++){
	 N=a+N*10; sum=sum+N;
	}

	printf("%d",sum);

	return 0;
}
	
