#include <stdio.h>
int main()
{
  int a,b,c,other;
  scanf("%d%d%d",&a,&b,&c);
  if(a==b&&a!=c)
   {
    other=c;
   }
    else if(a==c&&a!=b)
     {other=b;}
     else if(b==c&&b!=a)
      {other=a;}
   printf("%d\n",other);
  return 0;
}
