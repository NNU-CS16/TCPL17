#include <stdio.h>
int main()
{
    int y,n;
    y=0,n=2;

    while(n<=100)
    {
       y=y+n;
       n=n+2;
    }
    printf("y= %d\n",y);

    return 0;
}
