 #include <stdio.h>
 int main ()
 {
    int N, i, max, min, count = 0;
    int arr[100000], zd[100000], yx[100000];    
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf ("%d", &arr[i]);   
    for (i = 0, max = i; i < N; i++)
    {
        if (arr[i] >= arr[max])
        {
            max = i;
            zd[i] = arr[max];
        }
        else
            zd[i] = arr[max];
    }
    for (i = N - 1, min = i; i >= 0; i--)
    {
        if (arr[i] <= arr[min])
        {
            min = i;
            yx[i] = arr[min];
        }
        else
            yx[i] = arr[min];
    }
    for (i = 0; i < N; i++)
    {
        if (arr[i] == zd[i] && arr[i] == yx[i])
            count++;
        else
            arr[i] = 0;
    }
    printf ("%d\n", count);
    for (i = 0; i < N && count != 0; i++) 
        if (arr[i] != 0)
        {
            printf("%d", arr[i]);
            count--;
            if (count != 0)
                printf(" ");
        }        
    printf("\n");    
    return 0;
 }
