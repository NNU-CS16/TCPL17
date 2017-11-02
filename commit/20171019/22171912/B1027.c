#include <stdio.h>
#include <math.h>

int main()
{
  int N,n,i,j,k,mod;
  char c;  scanf("%d %c",&N,&c);

  n=(int)(sqrt(2*N+2)-1);
  if(n%2!=0)
    n=n;
  else
    n--;                     //判断每行是否为奇数
  for(i=1;i<=(n+1)/2;i++)    //递减到1之前
  {
     for(j=1;j<=i-1;j++)
        printf(" ");
     for(k=1;k<=n+2-2*i;k++)
        printf("%c",c);
     printf("\n");
  }
  for(i=(n+1)/2+1;i<=n;i++)  //递减到1之后
  {
     for(j=1;j<=n-i;j++)
        printf(" ");
     for(k=1;k<=2*i-n;k++)
        printf("%c",c);
     printf("\n");
  }
  mod=N-(n*n+2*n+1)/2+1;     //剩下没用掉的符号数
  printf("%d\n",mod);

  return 0;
}
