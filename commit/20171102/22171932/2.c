#include<stdio.h>
void print_hex(int a);
int main()
{
    int a,b;
    printf("请输入十进制整数:");
    scanf("%d",&a);
    print_hex(a);
    return 0;
}
void print_hex(int a)
{
    printf("%x\n",a);
}
