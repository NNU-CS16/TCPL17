#include<stdio.h>
int main( )
{
  int a,b,c,d,e;

  scanf("%3d",&a);
  if(a<=99)
  {printf("false");}
else if(a>=1000)
  {printf("false");}
  else
  {
    b=a/100;
  c=(a-b*100)/10;
  d=a%10;
  e=d*100+c*10+b;
  printf("%d",e);
    
    
    
  }
  return 0;
  }
