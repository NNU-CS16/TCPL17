#include <stdio.h>
int main()
{
  int N;
  printf("Please enter a positive integer N(N<=1000): ");
  scanf("%d",&N);
  
  int n, i, j, x, y;
  for(n=1;n<=N;n++)
  {
    if(2*n*n-1<=N && 2*(n+1)*(n+1)-1>N)
      x=n;
  }
    
  for(y=1;y<=x;y++)
  {
    for(j=0;j<=y-1;j++)
      printf(" ");
    for(i=2*x-2*y+1;i>=1;i--)
      printf("*");
    printf("\n");
  }
  
  for(y=1;y<=x-1;y++)
  {
    for(j=1;j<=x-y;j++)
      printf(" ");
    for(i=1;i<=2*y+1;i++)
      printf("*");
    printf("\n");
  }

  int m;
  m=N-2*x*x+1;
  printf("%d\n",m);
  return 0;
}
