#include<stdio.h>
#include<math.h>
int is_prime(int n)
{


    int i;
    for(i=2;i<=sqrt(n)+1;i++)

     { 
         if(n%i==0)
             break;
         if(i<=sqrt(n))
             return -1;
             return 0;     
     } 

    

}
int main()
{
    int n=3;
    int j=1; 
    while(j<=1000)
    {
        if(is_prime(n)==0)
    {
             j++;
             if(j>=100)
    
             printf("%d\n",n);
     }
     n++;
     }
    return 0;
} 
