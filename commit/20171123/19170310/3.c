#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
int add_fun(int n, int &sum)  
{  
    n && add_fun(n-1, sum);
    return (sum+=n);  
}  
  
int main()  
{  
    int sum=0;  
    int n=;
    printf("请输入n的值")
    scanf("%d\n",&n)  
    printf("1+2+3+...+n=%d\n",add_fun(n, sum));  
    return 0;  
}

