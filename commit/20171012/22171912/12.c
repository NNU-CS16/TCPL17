#include <stdio.h>

int min(int a,int b,int c)
{
   if(a<=b)
    c=a;
   else
    c=b;
   return c;
}

int main()
{
  int a,b,c,k,i;
  
  scanf("%d/%d",&a,&b);
  for(k=1;k<=min(a,b,c);k++)
  {
     if(a%k==0&&b%k==0)
       i=k;
  }
  a=a/i;
  b=b/i;
  printf("%d/%d\n",a,b);
  
  return 0;
}
