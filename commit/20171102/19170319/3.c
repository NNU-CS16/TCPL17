#include <stdio.h>
#include <math.h>
int is_pow2(int n)
{
	if (n / 2 == 0)
		return -1;
	for ( ;n > 2; )
    {
        if(n % 2 != 0)
        {
			return -1;
            break;
        }
    n /= 2;
    }
    if (n % 2 == 0)
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",is_pow2(n));
    return 0;
}
