#include<stdio.h>
int fac_bit_count(int);
int main()
{
int n;scanf("%d",&n);
printf("%d\n",fac_bit_count(n));
return 0;
}

int fac_bit_count(int n)
{
int count=1,i;
	for(i=n-1;i>1;i--)
	{
	n*=i;
	if (n>9)
	{count++;n/=10;}
	}
return count;
}
