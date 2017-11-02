#include<stdio.h>
int main()
{
	int N,i,j,k,n,m;
	char c;
	scanf("%d %c",&N,&c);

	for(m=1;(m+1)*(m+1)/2-1<=N;m+2)
	   n=m;
	
	
	for(i=1;i<=n;i++)
	   {
	        if(i<=(n+1)/2)
		  {
		   for(j=1;j<=i-1;j++)
		     printf(" ");
		   for(k=1;k<=n-2*i+2;k++)
		     printf("%c",c);
		  }
		else
		  {
		   for(j=1;j<=n-i;j++)
		     printf(" ");
		   for(k=1;k<=2*i-n;k++)
		     printf("%c",c);
		  }
	       printf("\n");
	   }
	printf("%d\n",N-(n+1)*(n+1)/2+1);
        return 0;
}






