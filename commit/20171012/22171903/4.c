#include <stdio.h>
int main()
{
    int x,m,n;
    for(x=0,n=1,m=1;n<=10;n++)
        m=m*n;
        x=x+m;
    printf("1!+2!+...+10!=%d\n",x);
    return 0;
}
