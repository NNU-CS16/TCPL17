#include<stdio.h>
int main()
{ 
	int m,n,N;
	printf("Please in put N:");
	scanf("%d",&N);
		for (m=1;m<=N;m++)
{
	for (n=1;n<=N-m;n++)
	printf(" ");
	for (n=1;n<=2*m-1;n++)
		printf("?");
	printf("\n");	
}
for(m=1;m<=N-1;m++)
{
	for(n=1;n<=m;n++)
		printf(" ");
	for(n=1;n<=2*(N-m)-1;n++)
		printf("?");
	printf("\n");
}
return 0;
}
