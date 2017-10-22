#include <stdio.h>  
int main()  
{  
    int x;  
    int n, a;  
    scanf("%d", &x);  
    a = x % 16;  
    n = x / 16 * 10 + a;  
    printf("%d", n);  
    return 0;  
}  

