#include<stdio.h>
int powa(int x,int y)
{
	int i;
	for(i=1;i<y;i++)
		x*=x;
	return x;
}
int main()
{
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	m=powa(a,b)%c;
	printf("%d",m);

		return 0;
}


