#include<stdio.h>
int main()
{
	int sum=0,a=1,i;
	for ( i=1;i<=10;i++)
     {	
	a=a*i;
	sum+=a;
        printf("the sum of 1!+2!+3!...+10! is %d\n",sum);
     }
	return 0;
}
