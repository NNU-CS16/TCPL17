#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
if(0<n<=13) 
{for(i=1;i<=n;i++) 
	{
	for(j=1;j<=n-i;j++)printf(" ");
	for(j=1;j<=2*i-1;j++)printf("*");
	printf("\n");
	}
for(i=n-1;i>=1;i--) 
        {
        for(j=1;j<=n-i;j++)printf(" ");
        for(j=1;j<=2*i-1;j++)printf("*");
	printf("\n");
        }}
else printf("wrong number\n");
return 0;
}
