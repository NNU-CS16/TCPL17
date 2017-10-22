#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,x[100],y=0,z;
    printf("n=");
    scanf("%d",&n);
    printf("%x\n",n);
    printf("%o\n",n);

    while (n>0)
{
    x[y]=n%2;
    y=y+1;
    n=n/2;
}
    for(z=y-1;z>=0;z--)
{
    printf("%d",x[z]);
} 

    return 0;
}
    
