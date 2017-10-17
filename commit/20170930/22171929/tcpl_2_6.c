#include <stdio.h>
int main()
{
    unsigned x,y,z;
    int n,p;
    y=x>>(p-n+1);
    z=y<<p;
    x=x^z;
    
    printf("%d,%d,%d\n",x,y,z);
    return 0;
}
          
