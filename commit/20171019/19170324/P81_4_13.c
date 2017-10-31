#include <stdio.h>
int main()
{
        int n,a;

        printf("请输入一个大于3的整数:");
        scanf("%d",&n);

        for(a=2;a<=(n-1);a++)
        {
            if(n%a==0) break;
        }

            if(a<n) printf("这个整数不是素数\n");

            else printf("这个整数是素数\n");

        return 0;
}

