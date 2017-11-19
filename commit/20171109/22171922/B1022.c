#include <stdio.h>

void printD( unsigned int n, int D );

int main()
{
 
    unsigned int a, b, c;
    int D;
    scanf( "%d%d%d", &a, &b, &D );
    
    c = a + b;
    printD( c, D );
  
    return 0;
  
}

void printD( unsigned int n, int D )
{

    if ( n / D == 0 ) printf( "%d", n % D ); 
    else
    {
        printD( n / D, D );
        printf( "%d", n % D );
    }
}

