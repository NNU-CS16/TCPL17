#include <stdio.h>
#include <math.h>

int main()
{
    int x,a,b,c;
    printf("x=,a=,b=,c=\n");
    scanf("%d%d%d%d",&x,&a,&b,&c);
    if (sqrt(abs(x))!=(4*a)/(b*c))
       {
         printf("0");
                      }
    else
       { printf("1");
                      }

    return 0;
}
