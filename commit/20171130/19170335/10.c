    #include <stdio.h>
    int main()
    { 
        int n, i, j, count = 0;
        scanf("%d", &n);
        if (n > 4000)
            return 0;
        int arr[n];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                    count++;
            }
        }
        printf("%d\n", count);
        return 0;
    }

