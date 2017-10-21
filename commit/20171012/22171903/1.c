#include <stdio.h>
int main()
{
    int y,n;
    y=0,n=1;

    while(n<=50)
    {
       y=y+2*n;
       n=n+2;
    }
    printf("y=%d\n",y);

    return 0;
}
