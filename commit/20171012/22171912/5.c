#include <stdio.h>

int PRODUCT(int i,int j,int product)
{
    for(j=1;j<=i;j++)                     //列数j增加
    {
        product=i*j;
        if(j==1)
          printf("\n");                   //1*i=i时换行
        printf("%d*%d=%d\t",j,i,product);
     }
}



int main()
{
    int i,j;                              //i表示行，j表示列
    int product;                          //product表示i和j乘积

    for(i=0;i<=9;i++)                     //行数i增加
    {
       PRODUCT(i,j,product);              //调用函数，增加j，并输出乘积表达式
    }

    printf("\n");                         //结束时换行

    return 0;
}

