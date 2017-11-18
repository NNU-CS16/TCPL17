#include <stdio.h>
int main()
{
    char str;
    int n = 0,x0 = 0,x1 = 0;
    while ((str = getchar()) != '\n')
    {
        if (str >= 'a' && str <= 'z')
            n += str - 'a' + 1;
        if (str >= 'A' && str <= 'Z')
            n += str - 'A' + 1;
    }
    for ( ;n != 0;)
    {
        if (n%2 == 0)
            x0++;
        else
            x1++;
        n /= 2;
    }
    printf("%d %d",x0,x1);
    return 0;
}
