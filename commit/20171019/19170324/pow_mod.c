#include <stdio.h>
int main()
{
        int a,b,c,q,n;

        printf("请输入3个整数：");
        scanf("%d%d%d",&a,&b,&c);

        for(n=2,q=2;n<=b;n++)
           q=(q*a);

        printf("%d\n",q%c);

        return 0;
}

