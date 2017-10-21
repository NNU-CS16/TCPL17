#include <stdio.h>
int main()
{
  int i,p,s;
  for(i=1,p=1,s=0;i<=10;i++)
  {
   p*=i;
   s+=p;
  }
  printf("sum=%d\n",s);
  return 0;
}
