#include<stdio.h>
int biao(int n)
{
	int i;
	int a;
	for(i=1;i<=n;i++)
        {
		a=i*n;
		printf("%d * %d=%2d  ",i,n,a);
	}
	printf("\n");
	return 0;
}
int main()
{
    int i;

    for(i=1;i<=9;i++)
       biao(i);

    printf("\n");
    return 0;
}
