#include <stdio.h>
int main()
{
    unsigned short int x,n,a,b,y;
    
    printf("x= ");
    scanf("%o",&x);
    printf("n= ");
    scanf("%d",&n);
    
    a=x>>n;
    b=x<<(16-n);
    y=a|b;
    
    printf("%o\n",y);
    
    return 0;
}
