#include<stdio.h>
int main( )
{
  int a,b,c,d;
  scanf("%d/%d",&a,&b);
  if(a>b)
  for(c=1;c<=b;c++)
  {
    if(a%c==0&&b%c==0)
  d=c;}
  if(a<b)
  for(c=1;c<=a;c++)
  {
  if(a%c==0&&b%c==0)
  d=c;  
  }
  if(a==b)
  printf("1/1");
else   printf("%d/%d",a/d,b/d);
  return 0;
  }
