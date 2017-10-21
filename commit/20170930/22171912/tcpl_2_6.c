#include <stdio.h>

int setbits(int x, int p, int n, int y)
{
    return x&~(~(~0<<n)<<(p+1-n)) | (y&~(~0<<n)) << (p+1-n);
}

int main()
{
    int x,y;
    int p,n;
    int result;

    printf("请输入整数x y\n");
    scanf("%d%d",&x,&y);
    printf("请输入个位数p n\n");
    scanf("%d%d",&p,&n);
    result = setbits(x,p,n,y);
    printf("result= %d\n",result);

    return 0;
}
