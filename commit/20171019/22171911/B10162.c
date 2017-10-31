#include<stdio.h>
#include<math.h>
int main( )
{
  char a[20],b[20],c,d;
  int i,m,n,s=0,t=0,e=0,f=0;
  scanf("%s %c %s %c",a,&c,b,&d);
  m=c-'0';
  n=d-'0';
  for(i=0;a[i]!='\n';i++)
  {if(a[i]==c)
  {e=e+m*pow(10,s);
   s++;}
  }
  for(i=0;b[i]!='\0';i++)
  {
    if(b[i]==d)
    {f=f+n*pow(10,t);
     t++;}
  }
  printf("%d",e+f);
  return 0;
}
