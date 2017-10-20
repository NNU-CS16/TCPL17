#include<stdio.h>
int main ()
{
	long int  i,a=1, sum=0;
	for(i=1;i<=10;i++)	
	{
	 sum=sum+a;
	 a=a*(a+1);
	}
	printf("the value of 1!+2!+3!+...+10! is:%ld\n",sum);

	return 0;
}	
