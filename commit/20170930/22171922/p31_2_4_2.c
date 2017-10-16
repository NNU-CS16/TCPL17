#include<stdio.h>
#include<math.h>
int main()

{
 float x,a,b,c;
 printf("x,a,b,c:");
 scanf("%f %f %f %f\n",&x,&a,&b,&c);
 if (sqrt(fabs(x))!=(4*a)/(b*c))
     printf("Not equal.\n");
 else 
     printf("Equal.\n");
 return 0;
}
