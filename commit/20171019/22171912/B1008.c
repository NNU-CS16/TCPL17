#include <stdio.h>
#include <stdlib.h>

int shift(int a[], int size)
{
     int i, tmp;

     tmp = a[size-1];

     for(i = size - 2; i >= 0; i--)
     {
        a[i+1] = a[i]; 
     }
     a[0] = tmp;
}
 
int print(int a[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf(i == size-1 ? "%d" : "%d ", a[i]);
    }
}

int main()
{
    int array[100];
    int i, N, M;

    scanf("%d %d", &N, &M);
    for(i = 0; i < N; i++)
        scanf("%d", &array[i]);

    for(i = 0; i < M; i++)
    {
        shift(array, N);
    }

    print(array, N);
    printf("\n");
    return 0;
}

