    #include <stdio.h>
    int main()
    {
        int N, p, i, j, temp, high, low, mid;
        scanf("%d%d", &N, &p);
        int arr[N], a[N];
        for (i = 0; i < N; i++)
            scanf("%d", &arr[i]);


        for ( i = 0; i < N - 1; i++)
        {
            for (j = 0; j < N - 1 - i; j++)
            {
                if (arr[j] >arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }


        for (i = 0; i < N; i++)
        {
            high = N -1;
            low = i;

            while (high - low >= 2)
            {
                mid = (high + low) / 2;
                if (arr[mid] > arr[i] * p)
                    high = mid - 1;
                else if (arr[mid] < arr[i] * p)
                    low = mid + 1;
                else
                {        
                    a[i] = mid - i + 1;
                    break;
                }
            }

            if (arr[mid] != arr[i] * p)
            {
                if (arr[low] < arr[i] * p)
                    a[i] = low - i + 1;
                else
                    a[i] = low - i;
            }
        }


        for (i =0; i < N - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        printf("%d\n", a[N - 1]);
        return 0;
    }




















