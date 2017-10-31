/* for循环语句 */
#include <stdio.h>

int main()
{
    int sum=0;
    int n=2;
    printf("以下计算2～100偶数和\n");

    for(sum=0,n=2; n<=100; n=n+2)
    {
         sum=sum+n;
    }
    printf("sum=%d\n",sum);

    return 0;
}
