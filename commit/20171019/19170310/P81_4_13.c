#include<stdio.h>
int main()
{
   int i,n;
   printf("input n(n>3): ");
   scanf("%d",&n);
   if(n%2==0)
   printf("%d is not a prime number\n",n);
    else
    {
     for(i=3;i<n;i=i+2)
     if(n%i==0)
     printf("%d is not a prime number\n",n);
     else
     printf("%d is a prime number\n",n);
    }
return 0;
}
 

  
