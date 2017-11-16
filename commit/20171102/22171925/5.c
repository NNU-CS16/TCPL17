#include <stdio.h>
#include <string.h>
    int fac_bit_count(int n)
{   int i=1,a,m;
    m=n;
    for (a=1;a<n;a++)
    {
	m=m*a;
    }
    while (m>=10)
    {
        m=m/10;
        i++;
    } 
    printf("%d\n",i);
}


    int main()
{   int n;

    printf("Please input n\n");
    scanf("%d",&n);

    fac_bit_count(n);
    return 0;
}
