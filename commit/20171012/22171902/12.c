#include<stdio.h>
int gcd(int a,int b)
{
	int c=a%b;
	if(c)
	 {
		a=b;
		b=c;
		c=a%b;
	 }
	return b;
}
	
int main()
	{
	int e,f;
	char s;		
	scanf("%d%c%d",&e,&s,&f);
	int i=gcd(e,f);
	printf("%d/%d\n",e/i,f/i);

	return 0;
}
	
	


