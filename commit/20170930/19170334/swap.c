#include <stdio.h>
int main()
{

	int a,b;
	printf("Please input the numbers of a,b.\n");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	int x;
	x=a;
	a=b;
	b=x;
	printf("a=%d,b=%d\n",a,b);

	return 0;

}
