#include<stdio.h>

int main ()
{
    int a=1,b=0,i;
    for(i=1;i<=10;i++)
       {
          a=a*i;
          b=b+a;
       }
     printf("%d\n",b);
    
    return 0;
}
