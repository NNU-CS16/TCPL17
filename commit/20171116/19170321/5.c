    #include <stdio.h>
    void SelectionSort(int arr[], int left, int right);
    int main()
    {
        int str[10];
        int a, b, i;
        printf ("input the number string;");
        for (i = 0;i < 10; i++)
            scanf("%d",&str[i]);
        printf ("input left,right:");
        scanf ("%d%d", &a, &b);
        SelectionSort(str, a, b);
        return 0;
    }
     void SelectionSort(int arr[], int left, int right)
    {
         int i, j, min , temp;
         for (i = left; i < right - 1; i++)
         {
             min = i;
             for (j = i + 1;j < left; j++)
                 if (arr[j+1] < arr[min])
                     min = j;
             if (min != i)
             {
                 temp = arr[min];
                  arr[min] = arr[i];
                  arr[i] = temp;
             }
          }
          for (i = 0;i < 10; i++)
              printf ("%d",arr[i]);

    }
     
