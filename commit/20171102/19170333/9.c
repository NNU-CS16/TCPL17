#include <stdio.h>
int is_int_pal(int n)
{
   	int a;
  	int m = n;
  	int sum = 0;
    while (n != 0)
  	{
    	a = n % 10;
    	sum = sum * 10 + a;
    	n = (n-a) / 10; 
  	}
   	if ( m == sum)
     	return 0;
   	return -1;
}
int main()
{
  	int n;
  	scanf("%d", &n);
  	printf("%d\n", is_int_pal(n));
  	return 0;
}
