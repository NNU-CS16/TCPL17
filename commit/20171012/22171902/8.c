#include<stdio.h>
int main()
{
	int a,b;
	int x,y;
	scanf("%d",&a);

	if((a>=0)&&(a<=153))
	{
		x=a%16;
		y=a/16;
		b=y*10+x;
	
		printf("%d\n",b);
	}
	return 0;
}
	 
