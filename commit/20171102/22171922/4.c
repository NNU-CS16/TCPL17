#include <stdio.h>
int count1_in_bin( int n );
int main()
{
   
    int n;
    scanf( "%d", &n );
    printf( "%d\n", count1_in_bin( n ) );
    return 0;

}
int count1_in_bin( int n )
{  
    int count = 0;  
    while (n) 
	{  
        n = n & (n-1);  
        count++;  
    }  
    return count;  
}
