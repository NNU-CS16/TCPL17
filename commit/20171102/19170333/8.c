#include <stdio.h>
int LCM(int p, int q)
{ 
  	int m, n;
  	m = p; 
  	n = q;
  	int a;
  	if (m < n)
  	{
  		a = n;
    	m = n;
    	n = a;
    }
  	while (a != 0)
    {
    	a = m % n;
    	m = n;
    	n = a;
    }
   	if (m != 1)
   	
   		a = (p / m) * q;
   	
  	else
  		a = p * q;
  	return a;
}
int main()
{
  	int p, q, a;
  	scanf("%d %d",&p, &q);
  	a = LCM(p, q);
  	printf("%d\n", a);
 
  	return 0;
}
