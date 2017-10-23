/* do…while循环语句*/
#include <stdio.h>

int main()
{
    int n,a;
    int sum=0,x=0,i=1;

    printf("请输入正整数n 个位数a\n");
    scanf("%d %d",&n,&a);

    do
    {
     x=x+a;                           //x为参与求和的单个项，看作等比数列之和
     sum=x+sum;                       //sum看作x之和
     i++;
     a=10*a;
    }
    while(i<=n);                      //循环语句求得总和sum

    printf("sum=%d\n",sum);

    return 0;
}
