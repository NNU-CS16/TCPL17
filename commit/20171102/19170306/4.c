#include<stdio.h>
int count1_in_bin(int);
int main()
{
int n;scanf("%d",&n);
printf("%d\n",count1_in_bin(n));
return 0;
}

int count1_in_bin(int n)
{
int count=0;
while(1)
	{
	if(n==0)break;
	if(n&1==1)count++;
	n=n>>1;
	}
return count;
}
