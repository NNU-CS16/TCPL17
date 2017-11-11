#include <stdio.h>

int fac_bit_count(int n)
{
	int i;
	unsigned long long m=1;
	for(n=n;n>0;n--)
		m=m*n;
	for(i=0;m!=0;i++)
		m=m/10;
	return i;

}

int main()
{
	int n;
	printf("请输入一个整数:");
	scanf("%d",&n);
	printf("%d",fac_bit_count(n));
	return 0;
}
