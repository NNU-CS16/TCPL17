#include<stdio.h>
int sum(int n);
int main()
{
  int i,N;
  printf("N=");
  scanf("%d",&N);
  printf("%d\n",sum(N));
  return 0;
}
int sum(int n)
{
 int i;
 if(n == 1)
   return 1;
 else if (n % 2 == 0)
          {
            i=(n *n) / 4;
            return sum(n / 2) + i;
          }
      if (n % 2 == 1)
          {
            return sum(n-1)+n;
          }
}
