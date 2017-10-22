#include<stdio.h>
int main()
{
	int N,k=1,j,i;
	scanf("%d",&N);
do
  {
	i=N-k;
	do
	  {
	   printf(" ");
	   i=i-1;
	  }while(i>=0);
	j=2*k-1;
	do
	  {
	   printf("*");
	   j=j-1;
	  }while(j>=1);
	k=k+1;
	printf("\n");
  }while(k<=N);
do
  {
	i=k-N;
	do
	  {  
	   printf(" ");
	   i=i-1;
	  }while(i>=0);
	j=2*(2*N-k)-1;
	do
	  {
	   printf("*");
	   j=j-1;
	  }while(j>=1);
	k=k+1;
	printf("\n");
  }while(k<=2*N-1);
return 0;
}
