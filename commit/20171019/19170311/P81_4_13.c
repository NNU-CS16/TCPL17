#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n;
	double a;

	scanf("%d",&n);
	a=sqrt(n);

	for(i=2;i<=a;i++)
	{if (n%i==0)
	break;}
	if (i<=a)
	printf("%d isn't a prime number",n);
	else 
	printf("%d is a prime number",n);
       

	return 0;
}
