#include <stdio.h>
#include <string.h>

void main()
{
    char s1[1000], s2[1000];
    int A[1000] = {0}, B[1000] = {0}, m, n, c, k, i;
    puts("请输入两个较大的数字：");
    gets(s1);
    gets(s2);
    m = strlen(s1);
    n = strlen(s2);
    if (m < n) 
        k = n;
    else
        k = m;
        c = k;
        for (i = 0;i < m;k--, i++)
            A[k] = s1[m - 1 - i] - '0';
            for (k = c,i = 0;i < n;k--, i++)
                B[k] = s2[n - 1 - i] - '0';
                printf("\n");
                for (i = c;i >= 0;i--)
                {
                    A[i] += B[i];
                    if (A[i] >= 10)
                    {
                        A[i] -= 10;
                        A[i - 1]++;
                    }
                }
                printf("此两数相加之和为：");
                if (A[0] != 0)
                {
                    for (i = 0;i <= c;i++)
                    printf("%d", A[i]);
                }
                else
                {
                    for(i = 1;i <= c;i++)
                        printf("%d", A[i]);
                }
                printf("\n"); 
                return;
}
