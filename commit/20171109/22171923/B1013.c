#include <stdio.h>  
#include <math.h>    
int isprime(int n)  
{  
    int i;  
    for ( i=2; i <= (int)sqrt((double)n); i++)  
        if (n%i == 0)  
            return 0;  
    return 1;  
}  
  
int main()  
{  
    int i=2,j=0,n,m,k=0;
    scanf( "%d%d",&m, &n);
    while ( k <= n )  
    {  
        if (isprime(i))  
        {  
            j++;  
            if(j >= n && j < m)  
            {  
                k++;  
                if (k%10 == 0)
                printf("%d\n",i);  
            }  
            if (j == m)  
            printf("%d", i);
        }    
        i++;  
    }  
    return 0;  
}  

