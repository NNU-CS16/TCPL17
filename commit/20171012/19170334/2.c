#include <stdio.h>

int main()

{
	int n,a=1,sum=0;
	for(n=1;n<=99;n++)
	{
	a=a*n;
	if(n%3==0)
	sum=sum+a,a=1;
	else continue;
	
	}
	printf("1*2*3+4*5*6+...+97*98*99=%d\n",sum);
        return 0;

}
