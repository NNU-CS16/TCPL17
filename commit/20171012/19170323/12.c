#include <stdio.h>
int asd(int n,int m);

int main()
{
  int a,b;
  char c;
  scanf("%d %c %d",&a,&c,&b);
  int i=asd(a,b);
  printf("%d/%d\n",a/i,b/i);

  return 0;
}

  int asd(int n,int m)
{
  int r=n%m;
  while(r)
 {
   n=m;
   m=r;
   r=n%m;
 }
   return m;
}
