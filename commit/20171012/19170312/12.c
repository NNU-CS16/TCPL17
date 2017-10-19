#include<stdio.h>
int main()
{
 int a,b,min,n=2;
 scanf("%d/%d",&a,&b);
 if(a<b)
 {min=a;}
 else
 {min=b;}
 do
 if(a%n==0 && b%n==0)
 {
  a=a/n;
  b=b/n;
  continue;
  n++;
 }
 else
 {n++;}
 while(n<=min);
 printf("%d/%d\n",a,b);
 return 0;
}
