#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int m;
    for (m=2; m<=sqrt(n); m++)
    {
        if(n % m == 0)
                return -1;
    }
    return 0;
}

int main()
{
 int i;
 int a=0;
 for (i=2; i<=100000; i++)
 { 
     if(is_prime(i) == 0)
     {  
         a=a+1;
        if(a>=100)
        printf("%d\t", i);    
     }
 if (a>=1000) break; 
}
return 0;
}
