    #include <stdio.h>
    int is_sorted(int arr[], int left, int right)
    {
        int i;
        for (i = left; i < right; i++)
        {
            if ( arr[i] > arr[i + 1])
                break;
        }
        if (i == right)
            return 1;
        else
            return 0;
    }

    int main()
    {
        int a[100];
        int left, right, i;
        scanf("%d%d", &left, &right);
        for (i = 0; i <= right; i++)
            scanf("%d", &a[i]);
        if (is_sorted(a, left, right) == 0)
            printf("no\n");
        else
            printf("yes\n");
        return 0;
    }



