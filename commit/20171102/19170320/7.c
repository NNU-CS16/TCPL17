#include <stdio.h>
#include <stdlib.h>
int GCD_recursive(int a,int b)
{
    int r;
    printf("a,b=");
    scanf("%d,%d",&a,&b);
    if(a<b)
    {
        r=a;
        a=b;
        b=r;
    }
    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
}
int main()
{
    int a,b;
    printf("a,b=");
    scanf("%d,%d",&a,&b);
    printf("the max common diviser is %d\n",GCD_recursive(a,b));
    return 0;
}
