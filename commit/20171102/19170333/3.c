#include <stdio.h>
#include <math.h>
int is_pow2(int n)
{
	unsigned int i=1;
    while (i <= n && n > 1)
    {
    	if (i == n) 
        {
      		return 0;
      	} 
  		i<<=1;
    }
  	return -1;
}
int main()
{
	int n;
	printf("Input one figure:");
	while (scanf("%d", &n) == 1)
	{

		printf("%d\n", is_pow2(n));
		printf("Input another figure.\n");
		printf("Or input q to QUIT:");
	}
	printf("Over!\n");
	return 0;
}
