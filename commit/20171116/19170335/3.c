    #include <stdio.h>
    int binary_search_recursive(int arr[], int left, int right, int query)
    {
        if (right < left)
            return -1;
        int mid = (left + right) / 2;
        if (arr[mid] == query)
            return mid;
        if (arr[mid] > query)
            return binary_search_recursive(arr, left, mid - 1, query);
        if (arr[mid] < query)
            return binary_search_recursive(arr, mid + 1, right, query);
    }



    int binary_search_iterative(int arr[], int left, int right, int query)
    {
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if (arr[mid] > query)
                right = mid - 1;
            else if (arr[mid] < query)
                left = mid + 1;
            else
                return mid;
        }
        return -1;
    }


    int main()
    {
        int a[20] = {1, 3, 4, 6, 7, 9, 11, 14, 16, 17, 19, 21, 22, 25, 28, 31, 33, 35, 39, 40};
        int left, right, query;
        scanf("%d%d%d", &left, &right, &query);
        printf("%d\n",binary_search_recursive(a, left, right, query));
        printf("%d\n",binary_search_iterative(a, left, right, query));
        return 0;
    }    
