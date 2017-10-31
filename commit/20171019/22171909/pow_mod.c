#include <stdio.h>
#include <math.h>
int main()
{
int  a,b,c,d;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
d=pow(a,b);
printf("%d\n",d%c);
return 0;
}
