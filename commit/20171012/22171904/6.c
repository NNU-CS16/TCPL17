#include<stdio.h>
int main()
{
int i,j;
int N;
printf("N=:");
scanf("%d",&N);
printf("Output:\n");
for(i=1;i<=N;i++)
{
  for(j=1;j<=N+1-i;j++)
    printf(" ");
  for(j=1;j<=2*i-1;j++)
    printf("*");
    printf("\n");
}
  for(i=N-1;i>0;i--)
{
  for(j=N-i;j>=0;j--)
    printf(" ");
  for(j=2*i-2;j>=0;j--)
    printf("*");
    printf("\n");
}
}
