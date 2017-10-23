#include <stdio.h>

int main()
{
    int a,b;

    printf("请输入整数a b\n");
    scanf("%d%d",&a,&b);

    printf("a=%d,b=%d \n",a,b);

    a=a^b;
    b=b^a;                               //b附得a的值
    a=a^b;                               //a赋得b的值
    printf("a=%d,b=%d \n",a,b);

    return 0;
}
