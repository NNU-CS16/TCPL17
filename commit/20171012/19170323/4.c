#include <stdio.h>
int main()
{
  int i,j,n;
  for(i=2,j=1,n=1;i<=10;i++)
{
  j=j*i;
  n=n+j;
}
  printf("1!+2!+...+10!=%d\n",n);

  return 0;
}
