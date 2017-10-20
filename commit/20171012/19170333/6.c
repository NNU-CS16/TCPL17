#include<stdio.h>
int main()
{
  int i,j,k,N;
  
  printf("Please input the number of row:");
  scanf("%d",& N);
  
  for(i=1;i<=N;i++)
  { 
    for(j=1;j<=22-i;j++)
       printf(" ");
    for(k=1;k<=2*i-1;k++)
       printf("*");
    printf("\n");
  }

  for(i;i>=0;i--)
  {
    for(j=1;j<=22-i+2;j++)
       printf(" ");
    for(k=1;k<=2*(i-2)-1;k++)
       printf("*");
    printf("\n");
  }
  return 0;
} 
