#include<stdio.h>
int main()
{
	int k,a,b,c;
	scanf("%d",&k);
	c=k%10;
	k=(k-c)/10;
	b=k%10;
	a=(k-b)/10;
	k=c*100+b*10+a;
	printf("%d",k);
return 0;
}

