    #include <stdio.h>
    void InsertionSort(int arr[], int left, int right);
    int main()
    {
        int str[10];
        int a, b, i,c;
        printf ("input the number string;");
        for (i = 0;i < 10; i++)
            scanf("%d",&str[i]);
        printf ("input left,right:");
        scanf ("%d%d", &a, &b);
        InsertionSort(str, a, b);
        return 0;
    }
    void InsertionSort(int arr[], int left, int right)
    {
        int temp, i, j;
        for (i = left + 1; i <= right; i++)
        {
            temp = arr[i];
            j = i - 1;
            while(arr[j] >= left && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            if (j != 0)
                arr[j + 1] = temp;
        }
         for (i = 0;i < 10; i++)
            printf("%d",arr[i]);
    } 
