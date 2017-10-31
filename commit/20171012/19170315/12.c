#include <stdio.h>

int main()
{
int a, b, i, m, n;
scanf("%d/%d\n",&a,&b);

if(a==b)
{
 printf("1");
}

else
{
 i=(a<b?a:b);
 while (!(a%i==0 && b%i==0))
  {
   i--;
  }
  if(i>=2)
   {
    m=a/i;
    n=b/i;
    printf("%d/%d\n",m,n);
   }
  else
   {
    printf("%d/%d\n",a,b);
   }
}
return 0;
}

