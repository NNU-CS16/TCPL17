#include <stdio.h>
int main()
{
 int n,a,b,c,m;
 scanf("%d",&n);
 c=n%100%10;
 b=n%100-c;
 a=n-b-c;
 m=100*c+b+a/100;
 printf("%d",m);
 return 0;
}
