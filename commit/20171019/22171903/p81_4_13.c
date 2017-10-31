#include <stdio.h>
#include <math.h>
int main ()
{
    int n,m,i;
    scanf("%d",&n);
    m=pow(n,1/2);
    
    for (i=2;i<=m;i++)
         if (n%i==0)
             break;

    if(i<n)
    printf("%d不是素数\n",n);
    else
    printf("%d是素数\n",n);
     
    return 0;

}
