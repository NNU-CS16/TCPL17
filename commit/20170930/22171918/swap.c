#include <stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    a=3,b=5;
    x=b;
    b=a;
    a=x;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
    
