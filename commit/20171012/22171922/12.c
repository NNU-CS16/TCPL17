#include<stdio.h>
int gcd(int a,int b)
{
 int temp;
 while(b!=0)
  {
  temp=a%b;
  a=b;
  b=temp;
  }
  return a;
}
int main()
{
 int m,n;
 char p; 
 scanf("%d%c%d", &m,&p,&n);
 int q=gcd(m,n);
 printf("%d/%d\n",m/q,n/q);
 return 0;
}
