#include <stdio.h>
int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n)
{
	int a;
	if (m < n)
    {
       	a = n;
       	n = m;
       	m = a; 
    } 
   	while (a != 0)
    {
      	a = m % n;
      	m = n;
      	n = a;
    }
   	return m;
}
int GCD_recursive(int m, int n)
{
	int a;
    if (m < n)
    { 
      	a = n;
      	n = m;
      	m = a;
    }
    a = m % n;
    if (a == 0)
    
    	return n;  
    
    else 
    {
    	m = n; 
    	n = a; 
    	GCD_recursive(m, n);
    }
}
int main ()
{
  	int m, n, q, b;
  	scanf("%d %d",&m, &n);
  	q = GCD_iterative(m, n);
  	printf("%d ", q);
  	b = GCD_recursive(m, n);
  	printf("%d\n", b);
 	
  	return 0;
}
