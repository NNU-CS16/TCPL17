#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int is_int_pal(int n);
int main()
{
	int number = 0;
	scanf("%d", &number);
	printf("%d", is_int_pal(number));
}
int is_int_pal(int n)
{
	int count = 0;
	int sum = 0;
	int temp = 0;
	int My_temp1 = 0;
	int My_temp2 = 0;
	My_temp1 = n;
	My_temp2 = n;
	while (My_temp1 > 9)
	{
		count++;
		My_temp1 = My_temp1 / 10;
	}
	while (count >= 0)
	{
		temp = My_temp2 % 10;
		My_temp2 = (My_temp2 / 10);
		sum += temp*pow(10, count);
		count--;
	}
	if (sum == n)
		return 1;
	else
		return 0;
}

