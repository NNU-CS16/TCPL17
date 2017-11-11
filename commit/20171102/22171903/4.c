#include <stdio.h>

int i;
int count1_in_bin(int n);
int main()
{
    int n;
    scanf("%d", &n);
    i=count1_in_bin(n);
    printf("%d\n", i);
   
    return 0;
}

int count1_in_bin(int n)
{
    int j, m;
    i = 0;
    for (j = 0; j < 16; j++)
    {
        m = n % 2;
	n = n>>1;
	if (m == 1)
	    i++;
    }  
    return i;
}
