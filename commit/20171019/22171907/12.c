#include <stdio.h>
int main()
{
    int n, i, ans;
    //n是输入的数
    //i是循环变量
    //ans是最终要输出的结果
    scanf("%d", &n);
    ans = 1;
    for(i=1; i<=n; i++)
    {
        //第一步，计算相乘的结果
        ans = ans * i;
        //第二步，去掉末尾的0
        while(ans % 10 == 0)
            ans = ans / 10;
        //第三步，去掉高位数，只保留个位数
        ans = ans % 10;
        //后两步是为确保下次计算结果不会溢出
    }
    printf("%d\n", ans);
    return 0;
}
