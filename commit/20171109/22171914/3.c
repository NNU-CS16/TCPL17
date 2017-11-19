#include <stdio.h>

int find(int n)
{
    int number;
  
    if (n == 0 || n == 1)
    {
        number = 0;
    } 
    else if (n == 2)
    {
        number = 1;
    }
    else if (n == 3)
    {
        number = 2;
    }
    else
    {
        number = find(n - 1) + find(n - 2);
    }

        return number;
}
