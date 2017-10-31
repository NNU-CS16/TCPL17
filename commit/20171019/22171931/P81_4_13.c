#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	printf("n(n>3)=");
scanf("%d",&n);

for(i=2;i<=sqrt(n);i++)
{
	if(n%i==0) break;
}
if(i<=sqrt(n))
	printf("%dbushisushu\n",n);
	else
	printf("%dshisushu\n",n);
	return 0;
	}
