#include<stdio.h>
int main()
{
	int n,sum=0;
	for(n=1;n<=99;n++)
      {

	if(n%3!=0) continue;
	sum+=n*(n-1)*(n-2);
      }
	printf("%d\n",sum);
	return 0;
}

