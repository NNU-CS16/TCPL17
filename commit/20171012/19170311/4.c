#include<stdio.h>
int main()
{
	int i;
	int sum=0,N=1;

	for(i=1;i<=10;i++)
	 { N=N*i ;sum += N;}
	
	printf("%d",sum);

	return 0;
}
	  
