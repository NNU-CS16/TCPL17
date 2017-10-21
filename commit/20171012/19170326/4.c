#include<stdio.h>
int fac(int n)
{
	if(n==0||n==1)
		return 1;
	if(n>1)
		return n*fac(n-1);
}
int main()
{
	int s=0,i=1;
do
{
	s=s+fac(i);
	i=i+1;
}while(i<=10);
printf("s=%d",s);
return 0;
}
