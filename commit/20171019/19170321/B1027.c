#include<stdio.h>
#include<math.h>
int main()
{
  int N,n,i,j,k;
  char c;
  scanf("%d %c",&N,&c);
  for(n=floor(sqrt(N/2));n>=1;n--)
    if(1+2*(n*n+n*2)<=N && 1+2*((n+1)*(n+1)+(n+1)*2)>N)
      break;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<i;j++)
      printf(" ");
    for(k=1;k<=2*(n-i)+3;k++)
      printf("%c",c);
      printf("\n");
  }
  for(i=1;i<=n+1;i++)
  {
    for(j=1;j<=n+1-i;j++)
      printf(" ");
    for(k=1;k<=2*i-1;k++)
      printf("%c",c);
    printf("\n");
  }
  printf("%d",N-(1+2*(n*n+n*2)));
  return 0;
}
