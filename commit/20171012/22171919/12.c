#include<stdio.h>
int main ()
{
    int x, y;
    scanf("%d/%d", &x, &y);
    int a = x, b = y,i;
    while (b>0) 
{
        i = a % b;
        a = b;
        b = i;
}
    
    printf("%d/%d\n", x/a, y/a);
    
    return 0; 
}
