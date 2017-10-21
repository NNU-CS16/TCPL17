#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d,%d",&a,&b);
  int origa=a;
  int origb=b;
  int t;
  while (b!=0)
  
  {
    t=a&b;
    a=b;
    b=t;
    
  }
  origa=origa/a;
  origa=origb/a;
  printf("%d,%d",origa,origb);
  return 0;
}
