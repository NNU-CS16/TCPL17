#include<stdio.h>
#include<math.h>
int main()
{
int x,a,b,c;
scanf("%d,%d,%d,%d",&x,&a,&b,&c);
if (sqrt(fabs(x))!=(4*a)/(c*b))
printf("Not equal.");
else printf("Equal.");
return 0;
}
