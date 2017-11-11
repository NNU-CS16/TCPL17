#include <stdio.h>
int count1_in_bin(int n)
{
	int i=0;
    for ( ;n >= 1; )
    {
    	if (n % 2 == 1)
        {
        	i += 1;
            n -= 1;
        }  
        n/=2;
    }
    return i;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",count1_in_bin(n));
    return 0;
}
