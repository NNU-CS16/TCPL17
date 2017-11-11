#include<stdio.h>
int count1_in_bin(int n);
int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d\n",count1_in_bin(a));

	return 0;

}

int count1_in_bin(int n)
{
	int t = 0;

	while (n >= 1)
	{
	 if (n % 2 == 1)
	 t++;
	 n = n / 2;
	}

	return t;
}
