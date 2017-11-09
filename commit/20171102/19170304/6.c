#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
    int n=2;
    
    is_prime(n);

    return 0;
}

int is_prime(int n)
{
    int flag=0,i,j=0;
   
    for(n=2;j<=1000;n++)
    {
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0) flag=-1;
    if(flag==0)
       {
        j++;
        if(j>=100&&j<=1000) printf("%d ",n);
        }
      }
}
    
