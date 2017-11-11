#include <stdio.h>
int fac_bit_count(int n);

int main()
{
	int n;
	printf("请输入整数n=");
	scanf("%d",&n);
	printf("%d!的位数为%d\n",n,fac_bit_count(n));
	return 0;
}

int fac_bit_count(int n)
{
	int temp = n,Temp,i=0;
	while (n >> 2)
	{
		temp = temp * (n-1);
		n--;
	}
	for (Temp = temp;Temp << 10;Temp = Temp / 10)
	{
		i++;
	}
	
	return i;
}
