#include <stdio.h>
int main()
{
	int n,sum=0;
	for(n=1;n<98;n+=3) sum=n*(n+1)*(n+2);
	
	
	printf("%d\n",sum);
	return 0;
}
