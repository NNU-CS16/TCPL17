#include<stdio.h>
int main(void)
{
	double n1,n2;
	int a;
	char b;

	scanf("%lf %d %c %lf",&n1,&a,&b,&n2);

	printf("%c %d %.2f %.2f",b,a,n1,n2);

	return 0;
}
