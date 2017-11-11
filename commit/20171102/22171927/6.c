#include <stdio.h>
#include <math.h>
int is_prime(int n);

int main()
{
    int a=2;
    int i=1;
    for(i=1;i<100;)
    { 
        if(is_prime(a))
            a++,
            i++;
        else
            a++;
    } 
    for(i=100;i<=1000;)
    {
        if(is_prime(a))
            printf("%d ",a ),
            a++,
            i++;
        else
            a++;
    } 
    return 0;
}
 
int is_prime(int n)
{
   int m;
   for(m=2;m<=sqrt(n);m++)
   {
     if(n%m==0)
      return 0;
   }
   return -1;
}
     
