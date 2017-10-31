#include<stdio.h>
int main()
{
	long int i,j,n,k;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	   {
		   k=1;
		   for(j=1;j<=i;j++)
		      {
		       printf("%5ld",k);
		       k=k*(i-j)/j;
		      }
		   printf("\n");
           }
        
	return 0;
}
