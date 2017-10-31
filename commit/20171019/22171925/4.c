#include <stdio.h>
#include <math.h>
  int N;
  int main()
{
  int x,y,N,m,n;
  printf("please input N<10000\nN=");
  scanf("%d",&N);
  m=sqrt(N/2);
  for(x=0;x<=m;x++)
{
  y=sqrt(N-x*x);
  if(x*x+y*y==N)
  printf("%d %d\n",x,y);
  n=0;
}
  if(n!=0)
  printf("No Solution\n");
  return 0;
}
