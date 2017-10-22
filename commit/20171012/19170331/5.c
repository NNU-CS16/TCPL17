#include<stdio.h>
int main ()
{
    int i=1,x,y;
    while (i<=9)
    {
    x=1;
          while(x<=i)
         {
         y=x*i;
         printf("%d*%d=%d\t",x,i,y);
         x+=1;
         }
    printf("\n");
    i+=1;
    }   

    return 0;
}
