#include<stdio.h>
int main()
{
	int N,n=1;
	char c;
	scanf("%d %c",&N,&c);
	while(2*n*n-1<=N)
	{n=n+1;}
	n=n-1;
	int i,j,k;
	for(i=1;i<=n-1;i++)
		     {for(j=i;j>1;j--)
			             printf(" ");
		      for(k=2*(n-i)+1;k>=1;k--)
				     printf("%c",c);
		      printf("\n"); }
	for(i=1;i<=n;i++)
		     {for(j=n-i;j>=1;j--)
			             printf(" ");
		      for(k=2*i-1;k>=1;k--)
				     printf("%c",c);
		      printf("\n"); }
	printf("%d\n",N-2*n*n+1);
	return 0;
}

