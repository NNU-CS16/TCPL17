#include <stdio.h>
int main()
{
    int N, count = 0;
    int a[100000], lmax[100000], rmin[100000];
    printf ("输入N,数组：");
    scanf("%d", &N);
    for(int i = 0; i < N; i++) 
	scanf("%d", a + i);
    for(int i = 0, max = i; i < N; i++)
        lmax[i] = a[i] >= a[max] ? a[max = i] : a[max];
    for(int i = N - 1, min = i; i >= 0; i--)
        rmin[i] = a[i] <= a[min] ? a[min = i] : a[min];
    for(int i = 0; i < N; i++)
    {
        if(a[i] == lmax[i] && a[i] == rmin[i])
            count++;
        else
            a[i] = 0;
    }

    printf("%d\n", count);
    for(int i = 0; i < N && count; i++) if(a[i])
        printf("%d%c", a[i], --count ? ' ' : '\0');
    printf("\n");

    return 0;
}
