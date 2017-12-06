#include <stdio.h>

int main()
{
    int i , N;
    int a[N] , b[N];
    printf ("输入N值：");
    scanf ("%d" ,&N);

    printf ("输入原始序列：");
    for (i = 0; i < N; i++)
        scanf ("%d" , &a[i]);
    for (i = 0; i < N; i++)
        scanf ("%d" , &b[i]);

    //判断排序方法
    int k = 0 , flag;
    while (b[k] <= b[k+1])
    k++;
    int temp = k + 1;

    for (k = k + 1; k < N; k++)
    {
        if (b[k] = a[k])
            flag = 0;
        else
            flag = -1;
            break;
    }

    if (flag == 0)
        printf("Insertion Sort\n");
    else
        printf("Merge Sort\n");

    if (flag == 0)
    {
        for (i = temp; b[i-1] > b[temp]; i--)
            b[i] = b[i-1];
        b[i] = b[temp];

        for (i = 0; i < N - 1; i++)
            printf("%d ", b[i]);
	  printf("%d\n", b[N-1]);
    }
    return 0;
}
