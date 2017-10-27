#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
    int n;
    printf("请输入n(n>3):");
    scanf("%d",&n);
    
    if(prime(n))
       printf("%d is prime.\n",n);
    else
       printf("%d is not prime.\n",n);
    return 0;
}
int prime(int n)
{
     int m;
     for(m=2;m<=sqrt(n);m++)
     {
         if(n%m==0)
               return 0;
    }
     return 1;
}
