#include <stdio.h>

int LCM(int m, int n)

{
	int a,b,c;
	int p=m;
	int q=n;
	if(q>p);
		a=q;
		q=p;
		p=a;
	do
	{
		b=p%q;
		p=q;
		q=b;
	}
	while(b!=0);

	if(p==1)
		c=m*n;
	else
		c=(m*n)/p;
	printf("%d\n",c);
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",LCM(m,n));
	return 0;
}

