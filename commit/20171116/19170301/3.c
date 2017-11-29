 #include <stdio.h>
 int binary_search_recursive (int arr[], int left, int right, int query);
 int binary_search_iterative (int arr[], int left, int right, int query);
 int main ()
 {
    int left, right, query, m, n, i = 0;
    int a[100];
    printf ("left=");
    scanf ("%d", &left);
    printf ("right=");
    scanf ("%d", &right);
    printf ("query=");
    scanf ("%d", &query);
    while ((scanf ("%d", &a[i])) == 1)
        i++;
    m = binary_search_recursive (a, left, right, query);
    n = binary_search_iterative (a, left, right, query);
    if (m == -1)
        printf ("没有%d\n", query);
    else
        printf ("第%d个=%d\n", n, query);
    return 0;
 }        
 int binary_search_recursive (int arr[], int left, int right, int query)
 {  
    if (left >= right)
        return -1;
    int m = (left + right) / 2;
    if (arr[left] == query)
        return left;
    if (arr[right] == query)
        return right;
    if (arr[m] == query)
        return m;
    if (arr[m] > query)
        return binary_search_recursive (arr, left, m, query);
    if (arr[m] < query)
        return binary_search_recursive (arr, m, right, query);
 }
 int binary_search_iterative (int arr[], int left, int right, int query)
 {
    int m;
    for ( ; left <= right;)
    {
        m = (left + right) / 2;
        if (arr[m] == query)
            return m + 1;
        if (arr[m] > query)
            right = m - 1;
        if (arr[m] < query)
            left = m + 1;
    }
    return -1;
 }
