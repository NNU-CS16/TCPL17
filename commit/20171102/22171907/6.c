#include "stdio.h"
int prime(int n)
{
     int i;

     for(i=2;i<=n/2;i++)
          if(n%i==0) 
             return 0;
     return 1;
}
int main()
{
     int i;
     for(i=100;i<=200;i++)
           if(prime(i)==1)
             printf("%d\t",i);
    printf("\n");
}
