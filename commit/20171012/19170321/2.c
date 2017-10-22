#include<stdio.h>
int main()
{
    int s=0,n;
    for (n=2;n<=98;n+=3)
        s=s+(n-1)*n*(n+1);
    printf("%d",s);
    
    return 0;
}
