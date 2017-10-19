#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,x;
    printf("a=");
    scanf("%d",&a);
    printf("n=");
    scanf("%d",&n);

    for(a,x=0;n>=1;n--)
        x=x+pow(a,n);
    printf("a+aa+...+aaa...a(n个a)=%d\n",x);
    return 0;
}
