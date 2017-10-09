#include<stdio.h>

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
   return ~(~(~0 << n) << (p+1-n))& x | (~(~0 << n)& y) << (p+1-n);
}

int main()
{
    unsigned x,y;
    int p,n,r; //函数的结果值
    printf("请输入 x,p,n,y 的值\n");
    scanf("%d,%d,%d,%d", &x, &p, &n, &y);
    r=setbits(x,p,n,y);
    printf("%d\n",r);
}
