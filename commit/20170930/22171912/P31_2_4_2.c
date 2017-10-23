#include <stdio.h>
#include <math.h>

int main()
{
    float x, a, b, c, z;

    printf("请输入x a b c\n");
    scanf("%f%f%f%f",&x,&a,&b,&c);

    z=sqrt(fabs(x));                   //计算根号下绝对值x

   if(z!=(4*a)/(b*c))
    printf("true %d\n",1);
   else
    printf("false %d\n",0);           //判断是否与4a/bc相等

    return 0;
}
