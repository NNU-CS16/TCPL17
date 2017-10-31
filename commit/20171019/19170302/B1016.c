#include<stdio.h>
int main()
{
	int da,db,m=0,n=0,i,j;
	long long int a,b;
	scanf("%lld%d%lld%d",&a,&da,&b,&db);
	while(a>0)
	{
		i=a%10;
		a=a/10;
		if(i==da)
			m++;
	}
	while(b>0)
	{
		j=b%10;
		b=b/10;
		if(j==db)
			n++;
	}
	int h,l,W;
	if(m!=0)
	{
	{
	for(h=2;h<=m;h++)
		da=da*10+da;
	}
	else
	da=0;
	}
	if(n!=0)
	{
		{
	for(l=2;l<=n;l++)
		db=db*10+db;
		}
		else
		db=0;
	}
	W=da+db;
	printf("%d\n",W);
	return 0;
}
	

		
