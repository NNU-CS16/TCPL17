#include<stdio.h>
int main()
{
int i,j,n=4;
scanf("%d",&n);
if(0<n<=13) 
{for(i=1;i<=n;i+=1) 
	{
	for(j=1;j<=n-i;j+=1)printf(" ");
	for(j=1;j<=2*i-1;j+=1)printf("*");
	printf("\n");
	}
for(i=n-1;i>=1;i-=1) 
        {
        for(j=1;j<=n-i;j+=1)printf(" ");
        for(j=1;j<=2*i-1;j+=1)printf("*");
	printf("\n");
        }}
else printf("wrong number\n");
return 0;
}
