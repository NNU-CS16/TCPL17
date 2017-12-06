    #include <stdio.h>
    int main()
    {
        int i,j,N, count = 0,max = 0, min = 0;
        int arr[100000], lmax[100000], rmin[100000];
        scanf ("%d", &N);
        for (i = 0; i < N; i++ )
            scanf ("%d",&arr[i]);
        for(i = 0, max = i; i < N;i++)
            lmax[i] = arr[i] >= arr[max] ? arr[max = i] :arr[max];
        for (i = N - 1,min = i;i >= 0;i--)
             rmin[i] = arr[i] <= arr[min] ? arr[min = i] : arr[min];
        for (i = 0; i < N;i++)
        {
            if (arr[i] == lmax[i] && arr[i] == rmin[i])
                count++;
            else
                arr[i] = 0;
        }
        printf ("%d\n",count);
        for (i = 0; i < N && count; i++)
            if (arr[i])
                printf ("%d%c",arr[i],--count ? ' ' : '\0' );
        printf ("\n");
        return 0;
    }
