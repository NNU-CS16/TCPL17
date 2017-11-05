#include <stdio.h>
int LCM(int m,int n);
int main ()
{
   int m,n;
   scanf("%d%d",&m,&n);
   printf("%d\n",LCM(m,n));
   return 0;
}
int LCM(int m,int n)
{
  int i,j;
  i=m*n;
  if(n>m)
  {
   m= m^ n;
   n= n^ m;
   m= m^ n;
  }
  j=m%n;
  while(j)
  {
    m=n;
    n=j;
    j=m%n;
  }
  return i/n;
}
