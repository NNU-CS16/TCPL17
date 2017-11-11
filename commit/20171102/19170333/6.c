#include <stdio.h>
#include <math.h>
int is_prime(int n)
{ 
	int i;
    for(i = 2; i <= sqrt(n); i++) 
    if (n % i == 0)
     
   		return -1;
    return 0;
}
int main()
{ 
  	int a, j = 0;
  	for (a = 2; a < 10000; a++)
    {
    	if (is_prime(a) == 0)
        {
     		j++;
       		if (j >= 100 && j <= 1000) 
       	 	printf("%d\n", a);
        } 
    }
  	printf("\n");
  	return 0;
}
   
