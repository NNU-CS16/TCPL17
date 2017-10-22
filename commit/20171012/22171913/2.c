#include<stdio.h>
int main()
{
    int m,n,s;
    s=0,n=1;
    while(n<=99)
    {
    m=n*(n+1)*(n+2);
    s=s+m;
    n++;
    }
    printf("1*2*3+4*5*6+...+97*98*99=%d\n",s);

    return 0;
}

