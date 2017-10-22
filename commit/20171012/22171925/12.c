#include<stdio.h>
int w(int a,int b)
{
 int v;
 while(b!=0)
{
 v=a%b;
 a=b;
 b=v;
}
 return a;
}
 int main()
{
 int m,n;
 char p; 
 scanf("%d%c%d", &m,&p,&n);
 int q=w(m,n);
 printf("%d/%d\n",m/q,n/q);
 return 0;
}
