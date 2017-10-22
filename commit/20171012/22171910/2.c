/*Add up some other figures*/
#include <stdio.h>
int main()
{
  int sum,n;

  sum=0,n=1;
  while(n<=97)
  {
    sum=sum+(n*(n+1)*(n+2));
    n=n+3;
  }

  printf("1*2*3+4*5*6+...+n*(n+1)*(n+2)=%d\n",sum);

  return 0;
}
