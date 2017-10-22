#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    b=c%16;
    a=c/16*10+b;
    printf("%d",a);
    return 0;
}
    
