#include <stdio.h>
#include <math.h>
int mod(int x,int y);

int main()
{
int a, b, c, d, n;
d=a;
scanf("%d%d%d",&a,&b,&c);

int i;
for(i=0;i<b;i++)
  {
   d*=a;
  }
n=mod(d,c);
printf("%d\n",n);
return 0;
}

int mod(int x,int y)
{
int m;
m=x%y;

return m;
}
