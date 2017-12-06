    #include <stdio.h>
    #include <stdlib.h>
    int comp(const void *a, const void *b)
    {
        int arg1 = *(const int*)a;
        int arg2 = *(const int*)b;
        if (arg1 < arg2)
            return -1;
        if (arg1 > arg2)
            return 1;
        return 0;
    }
    int main()
    {
        int N, length, i, j, temp;
        scanf("%d", &N);
        int arr[N], arr1[N];

        for (i = 0; i < N; i++)
            scanf("%d", &arr[i]);
        for (i = 0; i < N; i++)
            scanf("%d", &arr1[i]);
        for (i = N -1; arr[i] == arr1[i] && i >= 0; i--);
        for (j = i; arr1[j] >= arr1[j - 1] && j > 0; j--);
        if (j == 0)
        {
            printf("Insertion sort\n");
            temp = arr[i + 1];
            for (j = i + 1; arr1[j] < arr1[j - 1]; j--)
                arr1[j] = arr1[j - 1];
            arr1[j] = temp;
            for (i = 0; i < N - 1; i++)
                printf("%d ", arr1[i]);
            printf("%d\n",arr1[N -1]);
        }
        else
        {
            printf("Merge Sort\n");
            for (length  = 1, i = 0; i <N && length <= N; length = length * 2)
            {
                for (i = 0; i < N && arr[i] == arr1[i]; i++);
                for (j = 0; j < N / length; j++)
                    qsort(arr + j * length, length , sizeof(int), comp);
                qsort(arr + j * length, N % length, sizeof(int), comp);
            }    
        
            for (int i = 0; i < N - 1; i++)
                printf("%d ", arr[i]);
            printf("%d\n", arr[N - 1]);
        }
        return 0;
    }









    
