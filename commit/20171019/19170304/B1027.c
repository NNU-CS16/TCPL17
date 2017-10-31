#include<stdio.h>
int main()
{
  int N,m,n,i,j,k,r;
  int a[40];
  char c;
  scanf("%d %c",&N,&c);
  for(m=1;m<=N;m++)
  {if(n*n==m)
     {r=N-m;break;}
  }
  for(i=1;i<=n;i++)
    a[i]=2*n-i;
  for(i=n+1;i<=2*n-1;i++)
    a[i]=i-n+1;
  for(i=1;i<=2*n-1;i++)
  {
    for(j=1;j<=n-a[i];j++)
      printf(" ");
    for(k=1;k<=a[i];k++)
      printf("%c",c);
    printf("\n");
  }
  if(r!=0) printf("%d",r);
  return 0;
}
