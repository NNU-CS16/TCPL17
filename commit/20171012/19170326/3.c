#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,s=0,i=1;
	scanf("%d%d",&n,&a);
do
{
	s=s+pow(a,i);
	i=i+1;
}while(i<=n);
	printf("s=%d\n",s);
return 0;
}
