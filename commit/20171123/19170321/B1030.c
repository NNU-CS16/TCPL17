    #include <stdio.h>
    #include <stdlib.h>
    int comp(const void *a,const void *b)
    {
        return *(int*)a - *(int*)b;
    }
    int main()
    {
        int i, N, p, data[100000];
        scanf ("%d %d", &N, &p);
        for (i = 0; i < N; i++)
            scanf ("%d", &data[i]);
        qsort (data, N, sizeof(int), comp);
        int max = 0, left,right;
        for(left = 0, right = 0; right < N;left++)
        {
            while(right < N && data[right] <= data[left] * p)
                right++;
            if(max < right - left)
                max = right - left;
         }
         printf ("%d", max);
         return 0;
     }
