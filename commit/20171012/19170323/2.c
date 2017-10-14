#include <stdio.h>
int main()
{
  int i,n,s;
  s=0;
  n=97;
  for(i=1;i<=n;i=i+3)
    s=s+i*(i+1)*(i+2);

  printf("1*2*3+4*5*6+...+98*99=%d\n",s);
  
  return 0;
}
