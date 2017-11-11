#include <stdio.h>

int is_pow2(int n)
{
        int a = 2;
	if(n == 1)
	return 0;
	if(n == 0)
	return -1;
	while(a < n)
	{
	a <<= 1;
	}
	if(a == n)
        return 0;
        else 
	return -1;

}

int main()
{
        int n;
        scanf("%d",&n);
        printf("%d\n",is_pow2(n));
	return 0;
}

