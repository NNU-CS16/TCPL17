#include<stdio.h>
int count1_in_bin(int n);
int main()
{
int n;
scanf("%d",&n);
if(n==0)
	return 0;
else if(n%2!=0)
{
	return n/2+1;
}
else
{
return n/2;
}
}
	
