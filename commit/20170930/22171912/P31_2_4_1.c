#include <stdio.h>

int main()
{
    float x, result;

    printf("请输入x=");                   //屏幕输出
    scanf("%f", & x);                     //输入x的数值

    result=((x+2)*x+3)*x+1;               //计算结果
    printf("x^3+2*x^2+3x+1=%f\n",result); //输出结果

    return 0;
}
