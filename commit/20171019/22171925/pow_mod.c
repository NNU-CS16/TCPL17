#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c,i,f;
 printf("please input a,b(b>1),c:");
 scanf("%d%d%d",&a,&b,&c);
 f=a;
 for (i=1;i<=b;i++)
 if (i<b)
 a=a*f;
 else
 printf("%d",a);
 printf("=%d\n",a%c);
 

}
