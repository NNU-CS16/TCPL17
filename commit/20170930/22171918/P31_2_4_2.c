#include<stdio.h>
#include<math.h>
int main ()
{
    float x,a,b,c;
    scanf("%f%f%f%f",&x,&a,&b,&c);
    x=64,a=2,b=1,c=1;
    if (sqrt(fabs(x))!=(4*a)/(b*c))
    printf("Not equal!\n");
    else 
    printf("Equal!\n");
    return 0;
}
