#include<stdio.h>
int main()
{
	int a;
	int b=0;

	for(a=1;a<=97;a=a+3)
	b=b+a*(a+1)*(a+2);

	printf("%d\n",b);

	return 0;
}
