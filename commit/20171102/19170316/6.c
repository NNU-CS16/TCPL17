#include<stdio.h>
#include<math.h>
int sushu(int n)
{
int i;
float j;
j=sqrt(n);
for(i=2;i<=j;i++)
{if(n%i==0) return 1;}
return 0;
}

int is_prime(int n)
{
int s=1;
while (s<1000)
{	if(sushu(n)==0 && s>=100)
	{printf("%d ",n);
	n++;s++;}
	if(sushu(n)==0 && s<100)
	{n++;s++;}
	else n++;
}
}
int main()
{
int n;
is_prime(n);
return 0;
}

