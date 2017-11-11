#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i,t;
	for(i = 2; i <= sqrt(n); i++)
	{ if (n % i == 0)
	 break;
	}
	
	if (i <= sqrt(n))
	 t = -1;
	else 
	 t = 0;

	return t;

}

int main(void)
{
	int i; int j = 0;
	for(i = 2; j <= 1000; i++)
	{
	 if (is_prime(i) == 0)
	  j++;
	 else
	 continue;
	 if(j >= 100)
	  printf("%d ",i);	 
	}
	printf("\n");
	return 0;

}
