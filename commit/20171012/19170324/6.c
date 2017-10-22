#include <stdio.h>
void main()
{
	int i,j,k,N;

	printf("N=");
	scanf("%d",&N);

	for(i=1;i<=N;i++)
	{
	   for(j=1;j<=23-i;j++)
	      printf(" ");
	   for(k=1;k<=2*i-1;k++)
	      printf("*");

	   printf("\n");
	}

	for(i=N-1;i>=1;i--)
	{
	   for(j=1;j<=23-i;j++)   
	      printf(" ");
	   for(k=1;k<=2*i-1;k++)
	      printf("*");

	   printf("\n");
        }
}	
