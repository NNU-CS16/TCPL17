#include<stdio.h>
 
int main()
{
    int m,n;
    for(n=1;n<=9;n++)
    {
      for(m=1;m<=n;m++)
        printf("%d*%d=%2d ",m,n,m*n);
        printf("\n");
    }
    
    return 0;
}
