#include <stdio.h>
#include <math.h>
int is_prime(int n);

int main()
{
int m=0,n;
for (n=2; n<=10000;n++)
if(is_prime(n)==0)
{
  m++;if (m>=100&&m<=1000) 
	  printf(" %d",n);
}
else (is_prime(n)==-1);
return 0;	
}

int is_prime(int n)
{
	int i;
	for (i=2; i<=sqrt(n); i++)
	if (n%i==0 )
	return -1;
	else
 	return 0;
}
