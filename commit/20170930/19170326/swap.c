#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d\n",a,b);
return 0;
}



#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;/*b=a^b^b,a=a^b^a^b^b*/
	printf("a=%d,b=%d\n",a,b);
return 0;
}
