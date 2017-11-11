#include <stdio.h>
#include <string.h>

int is_int_pal(int n);
int main()
{
    int n;
    scanf("%d",&n);
    if (is_int_pal(n))
        printf("0\n");
    else
        printf("-1\n");
   
    return 0;
}

int is_int_pal(int n)
{   
    int m, o = 0;
    char a[16];
    int i, flag = 1;
    while (n != 0)
    {    
        m = n % 10;
        n = n / 10;
        a[o] = m;
        o++;
    }
    for (i = 0; i < o / 2; i++)
    {
        if (a[i] != a[o-i-1])
        {
            flag = 0;
            break;
        }
    } 	
    return flag;
}
