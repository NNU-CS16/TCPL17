    #include <stdio.h>
    void MergeSort(int Arr[],int left,int right);
    void Merge(int source[],int temp[], int start, int mid, int end);
    void Sort (int source[],int temp[], int  start, int end);
    int main()
    {
        int i;
        int A[] ={3, 4 ,1, 4, 5,31, 23, 45,18,25};
        for ( i = 0; i <= 9; i++)
            printf ("%d ", A[i]);
        printf ("\n");
       MergeSort(A, 3, 8);
        for ( i = 0; i <= 9; i++)
            printf ("%d ", A[i]);
        printf ("\n");
        return 0;
    }
    void MergeSort(int Arr[],int left,int right)
    {
        int B[10];
        Sort (Arr, B, left, right);
    }
    void Merge(int source[],int temp[], int start, int mid, int end)
    {
        int i = start,j = mid + 1, k = start;
        while(i != mid + 1 && j != end + 1)
        {
            if(source[i] > source[j])
                temp[k++] = source[j++];
            else
                temp[k++] = source[i++];
        }
        while(i != mid + 1)
            temp[k++] = source[i++];
        while(j != end + 1)
            temp[k++] = source[j++];
        for(i = start; i <= end; i++)
            source[i] = temp[i];
    }
    void Sort (int source[],int temp[], int  start, int end)
    {
        int mid;
        if (start < end)
        {
            mid = (start + end) / 2;
            Sort ( source, temp, start, mid);
            Sort ( source, temp, mid + 1, end);
            Merge( source, temp, start, mid, end);
        }
    }
