#include<stdio.h>
#include<math.h>
int main()
{
int N,n,x,y;
printf("please input N(N<=1000)");
scanf("%d",&N);
n=sqrt((N+1)/2);
for(x=n;x>=1;x=x-1)
{
for(y=1;y<=n-x;y++){printf(" ");}
for(y=n-x;y<n+x-1;y++){printf("*");}
printf("\n");
}
for(x=2;x<=n;x++)
{
for(y=1;y<=n-x;y++){printf(" ");}
for(y=n-x;y<n+x-1;y++){printf("*");}
printf("\n");
}
printf("%d",N-n*n*2+1);
return 0;
}
