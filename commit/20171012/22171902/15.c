#include<stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	while(a)
	{
	 b=b*2+a%2;
 	 a/=2;
	}
	while(b)
	{
		printf("%d",b%2);
		b/=2;
	}
	printf("%o\n",a);
	printf("%x\n",a);

	return 0;
}
	
	
