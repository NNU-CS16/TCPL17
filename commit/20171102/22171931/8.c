    #include <stdio.h>
    int t;
    int LCM( int m, int n )

{

        int z = m % n;

	    while ( z )

		    {

			        m = n;

				        n = z;

					        z = m % n;

						    }

	        return t / n;

}



int main()

{

       

        int m, n;

	    scanf( "%d%d", &m, &n );

	        t = m * n;

		    if ( n > m ) { m = m ^ n; n = m ^ n; m = m ^ n; }

		        printf( "%d\n", LCM( m, n ) );

			    return 0;   



}  
