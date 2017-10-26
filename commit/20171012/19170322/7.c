#include<stdio.h>
int main()
{int n,i,j,k,l,a;
  scanf("%d",&n);
  i=n%100;
  j=i%10;
  k=(n-i)/100;
  l=i-j;
  a=k+j*100+l;
  printf("%d\n",a);
  return 0;
}

