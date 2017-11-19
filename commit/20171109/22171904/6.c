#include <stdio.h>

   
void Move( char a, char c )
{
	printf( "%c->%c\n", a, c );
 }
					
void Hanoi( int n, char a, char b, char c )
{
	if ( n == 1 )
		if ( b == 'B' ) 
		{ 
			Move( a, b ); Move( b, c ); 
		}
		else
		Move( a, c );
	else
	{	
		if ( b == 'B' )
		{
			Hanoi( n - 1, a, b, c );
			Move( a, b );
			Hanoi( n - 1, c, b, a );
			Move( b, c );
			Hanoi( n - 1, a, b, c );
		}
		else
		{
			Hanoi( n - 1, a, c, b );
			Move( a, c );
			Hanoi( n - 1, b, a, c );
		}
	}
			 
}
				    

int Hanoi3(int n)
{
    if(n==1)
    return 2;
    return 3*Hanoi3(n-1)+2;
}
   
int main()
{
	int n;
    scanf("%d",&n);
	Hanoi(n,'A','B','C');
    printf("%d\n",Hanoi3(n));
    return 0;
}
