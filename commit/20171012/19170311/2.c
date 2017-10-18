#include<stdio.h>
int main()
{
	int i,sum=0;

	for(i=1;i<=97;i+=3)
	sum=sum +i*(i+1)*(i+2);

	printf("%d",sum);

	return 0;
}
