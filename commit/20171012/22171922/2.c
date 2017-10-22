#include <stdio.h>
int main()
{
 int sum=0,n=1,m;
 while (n<=97)
 {
  m=(n)*(n+1)*(n+2);
  sum=sum+m;
  n+=3;
 }
  printf("1*2*3+...97*98*99=%d\n",sum);
  return 0;
}
