#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a==b)
	{
		printf("%c",'C');
	}
	else if(a==c)
	{
		printf("%c",'B');
	}
	else
	{
		printf("%c",'A');
	}
	return 0;
}
