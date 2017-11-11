#include <stdio.h>
int is_int_pal(int n)
{    
    int a=0,b=0,c=0;
    c=n;  
    while(n)  
    {
        b=n%10;  
        n=n/10;  
        a=a*10+c;  
    }  
    if (a==c)  
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
