#include<stdio.h>
int cacu(int a,int b)
{
	int temp;
	while (b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	int c=cacu(a,b);
	a /=c;
	b/=c;
	printf("%d/%d\n",a,b);
	return 0;
} 
