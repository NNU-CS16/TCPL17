#include<stdio.h>
int main()
{
    int y,n;

    for(y=1,n=1;n<=97;)
    {
        y=y+n*(n+1)*(n+2);
        n=n+3;
    }
    printf("y=%d\n",y);
  
    return 0;
}
