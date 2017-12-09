    #include <stdio.h>
    #include <stdlib.h>
    void merge_sort_recursive(int arr[], int reg[], int start, int end)
    {
        if (start >= end)
            return;
        int mid = (start + end) / 2; 
        int start1 = start, end1 = mid;
        int start2 = mid + 1, end2 = end;
        merge_sort_recursive(arr, reg, start1, end1);
        merge_sort_recursive(arr, reg, start2, end2);
        int k = start;
        while (start1 <= end1 && start2 <= end2)
            reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
        while (start1 <= end1)
            reg[k++] = arr[start1++];

        while (start2 <= end2)
            reg[k++] = arr[start2++];
        for (k = start; k <= end; k++)
            arr[k] = reg[k];
    }
    void MergSort(int arr[], int left, int right)
    {
        int len = right - left + 1;
        int reg[len];
        int i;
        merge_sort_recursive(arr, reg, left, right);
        for (i = left; i <= right; i++)
          printf("%d ", arr[i]);
    }
    int main()
    {
        int i;
        int arr[100];
        int left, right;
        scanf("%d%d", &left, &right);
        for (i = 0; i <100; i++)
            arr[i] = rand()%100 + 1;
        
        MergSort(arr, left, right);
               
        return 0;
    }
