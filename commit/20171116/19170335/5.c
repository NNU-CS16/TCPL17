    #include <stdio.h>
    #include <stdlib.h>
    void SelectionSort(int arr[], int left, int right)
    {
        int i, j, min, temp;
        for (i = left; i < right; i++)
        {
            min = i;
            for (j = i + 1; j <= right; j++)
            {
                if (arr[min] > arr[j])
                    min = j;
            }
            if (min != i)
            {
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
        for (i = left; i <= right; i++)
            printf("%d ", arr[i]);
    }
    
    int main()
    {
        int a[100];
        int left, right, i;
        scanf("%d%d", &left, &right);
        for (i = 0; i < 100; i++)
            a[i] = rand() % 100;
         SelectionSort(a, left, right);
         printf("\n");
         return 0;
     }
