#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("a=%d,b =%d\n",a,b);
	int temp1,temp2;
	temp1=a;
	temp2=b;
	b=temp1;
	a=temp2;
	printf("a=%d,b=%d\n",a,b);
	
	return 0;
}


