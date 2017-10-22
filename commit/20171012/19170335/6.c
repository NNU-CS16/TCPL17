#include<stdio.h>
int main()
{
	int a,i,j,k,n;
	scanf("%d",&n);
    if(n<=12)
      {
        a=2*n-1;
	for(i=1;i<=a;i++)
	{
	   if(i<=n)
	     {
	       for(j=1;j<=n-i;j++)
		  printf(" ");
	       for(k=1;k<=2*i-1;k++)
		  printf("*");
	       printf("\n");
	     }
	   else
	     {
	       for(j=1;j<=i-n;j++)
		  printf(" ");
	       for(k=1;k<=4*n-2*i-1;k++)
		  printf("*");
	       printf("\n");
	     }
	}
      }
        return 0;
}


