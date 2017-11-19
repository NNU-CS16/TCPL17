/*4.c_输出二进制中1的个数*/
#include <stdio.h>

int count1_in_bin(int a[100], int n, int i, int c, int N)
{
    scanf("%d",&n);
    for (c = 0;n != 0; c++)
    {
        i = n%2;
        a[c] = i;
        c++;
        n = n/2;
    }
    c--;
    for(N = 0; c >= 0; c--)
    {
        if (a[c]==1)
            N++;
    }
    return N;
}

int main()
{
    int a[100], n, i, c, N;
    printf("请输入一个正整数n：\n");
    N = count1_in_bin(a, n, i, c, N);
    printf("%d\n", N);
    return 0;
}

