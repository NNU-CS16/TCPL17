#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int sum[500];
    scanf("%s",a);
    scanf("%s",b);
    int i,j,x;
    int k = 0,t = 0;
    for (i = strlen(a) - 1,j = strlen(b) - 1;i >= 0 && j >= 0;i--,j--)
    {
        x = (a[i] - '0') + (b[j] - '0') + t;
        t = x / 10;
        sum[k++] = x % 10;
    }
    while (i >= 0)
    {
        x = (a[i] - '0') + t;
        t = x / 10;
        sum[k++] = t % 10;
        j--;
    }
    if (t)
        sum[k++] = t;
    for (i = k - 1;i >= 0;i--)
        printf("%d",sum[i]);
    return 0;
}
