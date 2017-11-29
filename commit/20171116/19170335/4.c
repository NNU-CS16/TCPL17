    #include <stdio.h>
    #include <stdlib.h>
    void InsertionSort(int arr[], int left, int right)
    {
        int temp, i, j;
        for (i = left + 1; i <= right; i++)
        {
            temp = arr[i];
            for (j = i; j > left && arr[j - 1] > temp; j--)
                arr[j] = arr[j - 1];
            arr[j] = temp;
        }
        for (i = left; i <= right; i++)
            printf("%d ",arr[i]);
        printf("\n");
    }
    int main()
    {
        int a[100];
        int left, right, i;
        scanf("%d%d",&left,&right);
        for (i = 0; i < 100; i++)
            a[i] = rand() % 100;
        InsertionSort(a, left, right);
        return 0;
    }


