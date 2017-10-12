#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,x;

   scanf("%f,%f,%f,%f", &a,&b,&c,&x);
   if (sqrt(fabs(x))!=(4*a)/(b*c))
          printf("不相等");
   else
          printf("equal");
   return 0;
}
