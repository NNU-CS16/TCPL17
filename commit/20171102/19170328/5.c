#include <stdio.h>
int fac_bit_count(int n);

int main()
{
    int n;
    printf("Please input n:");
    scanf("%d", &n);
    printf("%d\n", fac_bit_count(n));
    return 0;    
}

int fac_bit_count(int n)
{
	int m, i, p=0;
	for (i=1; i<=n; i++)
	m=m*i;
	scanf("%d", &m);
	while(m)
	{
        p++;
	    m/10;   
	}
	return p;
}
