#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int is_prime(int);
int main()
{
int n,i,count=0;
for(i=2;count<=100;i++)
	if (is_prime(i)==0)count++;
for(i;count<=1000;i++)
	if (is_prime(i)==0)
	{count++;printf("%7d\t",i);}
return 0;
}
int is_prime(int n)
	{
	int i;
	for (i=2;i<=sqrt(n);i++)
		{
		if (n%i==0)		
		return -1;
		}
	return 0;	
	}
