#include <stdio.h>  

      
int main()
 {  
        double r1, p1;  
        double r2, p2;  
      
        double a1, b1;  
        double a2, b2;  
        double a3, b3;  
      
        scanf( "%lf%lf%lf%lf", &r1, &p1, &r2, &p2 );  
      
        a1 = r1 * cos( p1 );  
        b1 = r1 * sin( p1 );  
      
        a2 = r2 * cos( p2 );  
        b2 = r2 * sin( p2 );  
      
        a3 = a1 * a2 - b1 * b2;  
        b3 = b1 * a2 + a1 * b2;  
      
      
        if( -0.005 < a3 && a3 < 0 )  
            printf( "0.00" );  
        else  
            printf( "%.2lf", a3 );  
        if ( b3 >= 0 )
        {  
            printf( "+%.2lfi", b3 );  
        }  
        else if ( -0.005 < b3 && b3 < 0 ) {  
            printf( "+0.00i\n" );  
        }  
        else {  
            printf( "%.2fi\n", b3 );  
        }  
        return 0;  
    }  
