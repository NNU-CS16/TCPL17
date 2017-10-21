#include<stdio.h>

int min(int x,int y)
{
	int m;
	if(x<=y) m=x;
	else m=y;
return m;
}
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	int i,c;
	c=min(a,b);
	for(i=c;i>=1;i--)
	{
		if((a%i==0)&&(b%i==0)) break;
	}
	a=a/i;
	b=b/i;
	printf("%d/%d",a,b);
return 0;
}
	
