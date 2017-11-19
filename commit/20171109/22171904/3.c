#include <stdio.h>

int step( int n, int j1,int j2 )
{
 
		if ( n == 1 || n == 0 ) return j1;
		if ( n == 2 ) return j2; 
		return step( n-1, j2 , ( j1 + j2 ) );
				   
}
					    
int main()
{
		   
    int n;
	scanf( "%d", &n );
		     
	printf( "%d\n", step( n, 1, 2 )%100007 );
	return 0;
	
}
				                
