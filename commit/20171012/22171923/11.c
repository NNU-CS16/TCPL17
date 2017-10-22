#include<stdio.h>
int main()
{
  int a,b,c,n;
  int x=1;
  scanf("%d",&n);
  for(a=n;a<=n+3;a++)
    for(b=n;b<=n+3;b++)
      for(c=n;c<=n+3;c++)
        if(a!=b && b!=c && c!=a)
          if(x<6)
          {
            x++;
            printf("%d%d%d",a,b,c);
          } else {x=1;printf("%d%d%d\n",a,b,c);}
  return 0;
}
