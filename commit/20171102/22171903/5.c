#include <stdio.h>

int fac_bit_count(int n);
int main()
{
    int e, n;
    scanf("%d", &n);
    e = fac_bit_count(n);
    printf("%d\n", e);
   
    return 0;
}
 
int fac_bit_count(int n)
{
    int i, e = 0;
    float j = 1;
    for(i = 2; i <= n; i++)
    {
	j = j * i;
	if(j >= 1)
        {
	    j = j / 10.0;
            e++;
	}
    }
    return e;
}
