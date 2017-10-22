#include <stdio.h>
int main()
{
	int a,n,sum;
	for(a=0,n=1,sum=0;n<=97;n+=3)
		a=(n*(n+1)*(n+2));
		sum=sum+a;

	printf("1*2*3+4*5*6+...+97*98*99=%d\n",sum);

	return 0;
}
