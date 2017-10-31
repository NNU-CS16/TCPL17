#include <stdio.h>
int main()
{
	int n, x, y;
	int a = 0;
	scanf("%d", &n);
	int b = n / 2;
	for(x = 1; x <= b; ++x)
        {
	   for(y = x; y <= b; ++y)
             {
		if(x * x + y * y == n)
                {
		a= 1;
		printf("%d %d\n", x, y);
	        }
	     }
	}
	if(!a)
		printf("No Solution\n");

	return 0;
}
