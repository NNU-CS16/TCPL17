#include<stdio.h>
int main()
{
	int x,i,j;
	scanf("%d",&x);
	i=x/16;
	j=x%16;
	x=i*10+j;
        printf("%d\n",x);
	return 0;
}
