#include <stdio.h>

int main( )
{
        int a,b;
        scanf("%d%d",&a,&b);
    
        printf("a = %d, b= %d\n",a,b);

        int x,y;
        x=a;
        y=b;
        a=y;
        b=x;
  
        printf("a = %d, b= %d\n",a,b);
        return 0;
}
