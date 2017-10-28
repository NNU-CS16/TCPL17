#include <stdio.h>
int mod(int x,int y)
{
  int n;
  n=x%y;
  return n;
}
  int main()
{
 int  a,b,c,m,i,j;
 printf("please input a,b,c: ");
 scanf("%d%d%d",&a,&b,&c);
 m=1;
 for(j=1;j<=b;j++)
 {m*=a;}
 
 i=mod(m,c);
 printf("余数为：%d\n",i);
 
 return 0;
}
