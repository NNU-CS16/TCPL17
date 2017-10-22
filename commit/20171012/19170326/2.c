#include<stdio.h>
int main()
{
	int a,b,c,s;
	a=1;
	b=2;
	c=3;
	s=0;
do
{
	s=a*b*c+s;
	a=a+3;
	b=b+3;
	c=c+3;
}while(a<=97);
printf("s=%d",s);
return 0;
}

