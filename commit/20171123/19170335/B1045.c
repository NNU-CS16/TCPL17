    #include <stdio.h>
    int main()
    {
        int N, flag = 1, count = 0, i, j, temp;
        scanf("%d", &N);
        long int arr[N], sortarr[100000];
        for (i = 0; i < N; i++)
        scanf("%ld", &arr[i]);
        for (i = 0; i < N; i++)
        {
            flag = 1;
            for (j = i + 1; j <= N - 1 && flag != 0; j++)
            {
                if (arr[i] > arr[j])
                    flag = 0;
            }
            if (flag == 0)
                continue;
            for (j = i - 1; j >= 0 && flag != 0; j--)
            {
                if (arr[i] <arr[j])
                    flag = 0;
            }
            if (flag == 1)
                sortarr[count++] = arr[i];
            
        }
        
  
        for (i = 1; i <=count - 1; i++)
        {        
            temp = sortarr[i];
            for (j = i; j > 0 && sortarr[j - 1] > sortarr[j]; j--)
                sortarr[j] = sortarr[j - 1];
            sortarr[j] = temp;
        }
        printf("%d\n",count);
        for (i = 0; i <=count - 2; i++)
            printf("%ld ", sortarr[i]);
        printf("%ld\n", sortarr[count - 1]);
        return 0;
    }
        

