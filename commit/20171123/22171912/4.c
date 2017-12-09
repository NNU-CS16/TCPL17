/*4.c_不准用加号的加法*/
#include <stdio.h>

int add(int n1,int n2)   
{   
    if (n1 == 0) return n2;   
    if (n2 == 0) return n1;
    int sum1,sum2;
    sum1 = n1 ^ n2;
    sum2 = (n1 & n2) << 1;   //进一位
    return add(sum1,sum2);   
}   
   
   
int main()   
{   
    printf("请输入n1和n2：");   
    int n1, n2;   
    scanf("%d %d", &n1, &n2);   
    printf("%d\n",add(n1,n2));   
    return 0;   
}   
