#include<stdio.h>
int main()
{
 int n=1,N,sum,rest;
 char c;
 scanf("%d %c",&N,&c);
 for(n=1;sum<=N;n++)
 {
  sum=2*n*n-1;
 }
 n=n-2;
 sum=2*n*n-1;
 rest=N-sum;
 int i,j,k;
 for(i=1;i<=n;i++)
 {
  for(j=0;j<=i-1;j++)
   printf(" ");
  for(k=0;k<=2*n-2*i;k++)
   printf("%c",c);
   printf("\n");
 }
 for(i=1;i<=n-1;i++)
 {
  for(j=1;j<=n-i;j++)
   printf(" ");
  for(k=1;k<=2*i+1;k++)
   printf("%c",c);
   printf("\n");
  }
  printf("%d\n",rest);
  return 0;
} 
