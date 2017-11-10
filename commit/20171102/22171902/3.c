#include<stdio.h>
int is_pow2(int n);
int main()
{
	int n = 0;
	while (scanf("%d",& n))
	{
		printf("%d", is_pow2(n));
	}
}
int is_pow2(int n)
{
	int Data = n; int My_data = 0;
	int My_data1 = n;
	int data[100]; int i = 0;
	int count = 0;
	while (My_data1 > 9)
	{
		count++;
		My_data1 = My_data1 / 10;
	}
	while (i<=count)
	{
		My_data = Data % 2;
		Data = Data / 2;
		data[i++] = My_data;
	}
	if (data[0] == 0)
	{return 0;}
	else return 1;
}

