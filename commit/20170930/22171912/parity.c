#include <stdio.h>

int main()
{
    int n, flag;

    printf("请输入整数n=");
    scanf("%d",&n);

    flag= (n%2==0)?0:1;          //判断n是否被2整除
    printf("%d\n",flag);

    return 0;
}
