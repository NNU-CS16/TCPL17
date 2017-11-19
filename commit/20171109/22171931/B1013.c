#include <stdio.h>

#include <math.h>



int Isprime( int n )

{

     

        for (int i = 2; i <= sqrt( n ); i++ )

	            if ( n % i == 0 ) return 0;

	    return 1;

	      

}



int main()

{

     

        int m, n, i = 3;

	    int t = 2, cnt = 1;

	        scanf( "%d%d", &m, &n );

		    if ( m == 1 )

			        if ( n >= 2 ) { printf( "2 " ); cnt++; }

		            else { printf( "2" ); cnt++; }

		        while ( t <= n )

			        {

				            if (Isprime( i ) )

						        {

							                if ( t >= m )

									                {

											                    if ( cnt % 10 == 0 ) printf( "%d\n", i );

													                    else if ( t == n ) printf( "%d", i );

															                    else printf( "%d ", i );

																	                    cnt++;

																			                }

									            t++;

										            }


