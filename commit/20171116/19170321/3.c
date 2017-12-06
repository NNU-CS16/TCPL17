    #include <stdio.h>
    int binary_search_iterative(int arr[], int left, int right, int query);
    int binary_search_recursive(int arr[], int left, int right, int query);

    int main()
    {
        int str[10];
        int a, b, i,c;
        printf ("input the number string;");
        for (i = 0;i < 10; i++)
            scanf("%d",&str[i]);
        printf ("input left,right:");
        scanf ("%d%d", &a, &b);
        printf ("input query;");
        scanf ("%d", &c);
        printf ("%d %d \n", binary_search_iterative(str, a, b, c), binary_search_recursive(str, a, b, c));
        return 0;
    }
    int binary_search_iterative(int arr[], int left, int right, int query)
    {

        while (1)
        {

            if (arr[left] == query)
                return left;
            if (arr[right] == query)
                return right;
            if (right - left <= 1)
                return -1;
            if (arr[(left + right) / 2] <= query)
               left =  (left + right) / 2;
             else
               right =  (left + right) / 2;
        }
    }
     int binary_search_recursive(int arr[], int left, int right, int query)
    {

            if (arr[left] == query)
                return left;
            if (arr[right] == query)
                return right;
            if (right -left <= 1)
                return -1;
            if (arr[(left + right) / 2] <= query)
               binary_search_recursive(arr, (left + right) / 2, right, query);
            else
               binary_search_recursive( arr, left, (left + right) / 2, query);
    } 
 
