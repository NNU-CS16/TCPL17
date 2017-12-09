    #include <stdio.h>
    #include <stdlib.h>
    int comp(const void *a, const void *b)
    {
        return *(int*)a - *(int*)b;
    }
    int main()
    {
        int  N, origin[100], halfsort[100],i,j, length;
        scanf("%d",&N);
        for (i = 0; i < N; i++)
            scanf("%d",origin + i);
        for (i = 0; i < N; i++)
             scanf("%d", halfsort + i);
        for (i = 0; i < N - 1 && halfsort[i] <= halfsort[i + 1];i++);
        for (length = ++i; i < N && halfsort[i] == origin[i]; i++);
        length = i == N ? length + 1:0;
        if(length)
        {
            puts("Insertion Sort");
            qsort(origin, length, sizeof(int), comp);
        }
        else
        {
            puts("Merge Sort");
            for (length = 1, i = 0; i < N && length <= N; length *= 2)
            {
                for (i = 0;i < N && origin[i] == halfsort[i];i++);
                for (j = 0; j < N / length; j++)
                    qsort(origin + j * length, length,sizeof(int), comp);
                qsort(origin + j * length,N % length,sizeof(int), comp);
            }
         }
            for (i = 0; i < N; i++)
                 printf("%d%c", origin[i], i == N - 1 ? '\n' : ' ');
            return 0;
        }
