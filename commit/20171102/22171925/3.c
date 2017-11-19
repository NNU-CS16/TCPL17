#include <stdio.h>
    int is_pow2(int n)
{   int i,j = 1;
    for (i = 0;i < n;i++)
    {    j = j * 2;
         if (j == n)
         printf("是二的幂！\n");
    }
}
int main()
{   int n,m;
    printf("please input n\n");
    scanf("%d",&n);
    is_pow2(n);
     return 0;
}
