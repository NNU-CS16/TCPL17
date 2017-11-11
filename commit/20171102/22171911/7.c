#include <stdio.h>
int GCD_iterative(int m,int n);
int GCD_recursive(int m,int n);
int GCD_iterative(int m,int n)
{   
    int r,j;
    if (m < n)
    {
	j = m;
	m = n;
	n = j;
    }
    r = m % n;      
    while (r != 0)    
    {  
	m = n;
        n = r;
        r = m % n;
     }
    printf ("%d", n);
         
    
}
int GCD_recursive(int m,int n)
{
    int r,j;
    if (m < n)
    {
        j = m;
        m = n;
        n = j;
    }
    r = m % n;
    if (r == 0)
	return n;
    else
	return GCD_recursive(n,r);
}
int main( )
{
    int m, n;
    scanf ("%d%d", &m, &n);
    GCD_iterative(m,n);
    GCD_iterative(m,n);
    return 0;
}
    

