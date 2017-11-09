#include <stdio.h>
#include <string.h>

int is_int_pal(int n)
{    
    int b = 0;  
    int c = 0;  
    int d = 0; 
    d = n;  
    while(n)  
    {
        c = n % 10;  
        n = n / 10;  
        b = b * 10 + c;  
    }  
    if (b == d)  
    return 0;
    else  
    return -1;  
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", is_int_pal(n));
    return 0;
}
