#include<stdio.h>
int main()
{
	int s,i;
	s=0;
	i=2;
	do
	{
	s=s+i;
	i=i+2;
	}while(i<=100);
	printf("s=%d\n",s);
 return 0;
}
