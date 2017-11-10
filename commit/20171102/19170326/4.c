#include<stdio.h>
int count1_in_bin(int n)
{
	int count=0;
	int c;
	while(n!=0)
	{
		c=n&1;
		if(c=1)
		{
			count++;
			n=n>>1;
		}
	}
return count;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",count1_in_bin(n));
	return 0;
}
