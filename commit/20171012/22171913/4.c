#include<stdio.h>
int main()
{
    int m,n,s;
    s=0;
    m=1;
    for(n=1;n<=10;n++)
    {
    m=m*n;
    s=s+m;
    }
    printf("1到10各数阶层的和=%d\n",s);
    return 0;
}
