#include <stdio.h>
int add (int n1 , int n2);

int main ()
{
    int n1 , n2 , result;
    scanf ("%d%d" , &n1 , &n2);
    result = add (n1 , n2);
    printf ("%d\n" , &result);
    return 0;
}

int add (int n1 , int n2)
{
    int res , sum;
    while (n2 != 0)
    {
        sum = n1^n2;//判断两个相应的位值是否为异
        res = (n1&n2) << 1;
        n1 = sum;
        n2 = res;
    }
    return sum;
}
