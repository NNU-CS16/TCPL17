#include <stdio.h>
int main()
{
    int N,a,b;
    int sum = 0;
    scanf("%d", &N);
    for ( ; N > 0; N--) 
    {
        b = N;
        a = b % 2;
    {
        if ( a != 0)
        {
            sum = sum + b;
        }  
        if (a == 0)
        {          
          do
          { 
	      b = b/2; 
          }while ((b % 2) == 0);
              sum = sum + b;        
        }
    }
    }
    printf("sum = %d", sum);
    return 0;
}	 
