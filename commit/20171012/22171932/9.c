#include<stdio.h>
int main()
{  
    int a,b,c,d;
    printf("请输入浮点数1、整数、字符、浮点数2：");
    scanf("%.2f%d%s%.2f",&a,&b,&c,&d);
    printf("%s %d %.2f %.2f",c,b,a,d);
    return 0;
}
