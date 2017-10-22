/* while循环语句*/
#include <stdio.h>

int main()
{
    int product=0;  //三数乘积
    int a=1;
    int sum=0;      //总和

    printf("以下计算1*2*3+…+97*98*99的和\n");
    while(a<=97)
    {
         product = a*a*a+3*a*a+2*a;          //计算每组三个数的乘积
         sum=product+sum;
         a=a+3;
    }
    printf("sum=%d\n",sum);                  //各组乘积的总和

    return 0;

}
