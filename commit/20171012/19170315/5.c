#include <stdio.h>

int main()
{
int x, y, z;

for( x=1; x<10; x++)
   {
    for( y=1; y<=x; y++)
       {
        printf("%d*%d=%-3d",y,x,y*x);
       }
    printf("\n");
   }
return 0;
}

