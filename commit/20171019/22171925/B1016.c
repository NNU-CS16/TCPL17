#include <stdio.h>
 int num(long int x,int y)
{
 int t=0;
 while (x>0)
{
 if (x%10==y) t++;
 x/=10;
}
 return t;
}
 int main()
{ long int i,a,b,ta=0,tb=0;
  int da,db;   
  scanf("%ld%d%ld%d",&a,&da,&b,&db);
  for (i=1;i<=num(a,da);i++)
  ta=ta*10+da;
  for (i=1;i<=num(b,db);i++)
  tb=tb*10+db;  
  printf("%ld\n",ta+tb);
  return 0; 
}
