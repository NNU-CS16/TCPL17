#include <stdio.h>
int main()
{
	int n,a[100],i=0,j;
	printf("n=");
	scanf("%d",&n);
	printf("八进制表示为：%o\n",n);
	printf("十六进制表示为：%x\n",n);
	while (n>0)
	{
		a[i]=n%2;
		i=i+1;
		n=n/2;
	}
	for(j=i-1;j>-1;j--)
	{ printf("%d",a[j]);}
	return 0;
}
