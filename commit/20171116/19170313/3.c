#include <stdio.h>
int binary_search_recursive(int arr [ ] , int left, int right, int query);
int binary_search_iterative(int arr [ ] , int left, int right, int query);
int main()
{
    int arr [ 1000 ] , left, right, query, i, m, n;
    scanf("%d%d%d", &left, &right, &query);
    for (i = 0;i <= right;i++)
        scanf("%d", &arr [ i ] );
    m = binary_search_recursive(arr, left, right, query);
    if (m != -1)
        printf("%d\n", m);
    if (m == -1)
        printf("no\n");
    n = binary_search_iterative(arr, left, right, query);
    if (n != -1)
        printf("%d\n", n);
    if (n == -1)
        printf("no\n");
    return 0;
}
int binary_search_recursive(int arr [ ] , int left, int right, int query)
{
    int i;
    i = left;
    if (i <= right)
    {
        if (arr [ i ] != query)
        {
            left++;
            return binary_search_recursive(arr, left, right, query);
        }
        if (arr [ i ] == query)
            return i;
    }
    if (i > right)
        return -1;
}
int binary_search_iterative(int arr [ ] , int left, int right, int query)
{
    int i;
    for (i = left;i <= right; )
    {
        if (arr [ i ] != query)
            i++;
        if (arr [ i ] == query)
        {
            return i;
            break;
        }
    }
    if (i > right)
        return -1;
}
