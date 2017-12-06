#include <stdio.h>
#include <stdlib.h>
int Function(int i);
int main()
{
    int N, j = 1, s = 0;
    printf("Please input: ");
    scanf("%d", &N);
    for (j = 1; j <= N; j++)
    {
	s = s + Function(j);
    }
    printf("%d\n", s);
    return 0;
}
int Function(int i)
{
    int j, n;
    for (j = i; j >= 1; j--)
    {
	if ((i % j == 0) && (j % 2 == 1))
	    return j;
    }
    
}

