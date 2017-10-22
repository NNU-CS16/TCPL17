#include <stdio.h>
int main()
{
    int x,a,b,c;
    scanf("%d",&x);
    if(99<x<1000)
    {a=x/100;
    b=(x%100)/10;
    c=x%10;
    printf("%d",100*c+10*b+a);
}
    else printf("wrong number\n");
    return 0;
}
