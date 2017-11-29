    #include <stdio.h>
    void BubbleSort(int arr[], int left, int right);
    int main()
   {
        int str[20];
        int a, b, i;
        printf ("input the number string;");
        for (i = 0;i < 20; i++)
            scanf("%d",&str[i]);
        printf ("input left,right:");
        scanf ("%d%d", &a, &b);
        BubbleSort(str, a, b);
        printf ("\n");
        return 0;
    }
    void BubbleSort(int arr[], int left, int right)
   {
        int i, j, temp;
        for (i = 0; i < right - left ; i++)
            for (j = left; j < right - i;j++)
                if (arr[j] > arr[j + 1])
                    {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
         for (i = left;i <= right; i++)
             printf ("%d ", arr [i]);
    }
