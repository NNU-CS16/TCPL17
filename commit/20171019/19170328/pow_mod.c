#include<stdio.h>
int main()
{
        int a,b,i,c,total;
	long int d=1;
	printf("Please input a b c:\n");
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<=b;i++)
	d=d*a;
	total=d%c;
	printf("%d\n",total);
	return 0;
	}

	

