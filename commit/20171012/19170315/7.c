#include<stdio.h>

int main( )
{
    int x, a, b, c;

    printf("请输入一个三位数整数:");
    scanf("%3d",&x);

    a=x/100;
    b=x%100/10;
    c=x%10;

    if(c!=0 && b!=0)
       printf("%d的逆序是%d%d%d\n",x,c,b,a);
    if(c==0 && b!=0)
       printf("%d的逆序是%d%d\n",x,b,a);
    if(c==0 && b==0)
       printf("%d的逆序是%d\n",x,a);

    return 0;
}

