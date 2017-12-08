 #include <stdio.h>
 #include <stdlib.h>

 int comp(const void *a, const void *b)
 {
   return *(int*)a - *(int*)b;
 }

 int main()
 {
    int N, origin[100], halfsort[100], i, j, len;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) 
       scanf ("%d", origin + i);
    for(int i = 0; i < N; ++i) 
       scanf("%d", halfsort + i);
    for(i = 0; i < N - 1 && halfsort[i] <= halfsort[i + 1]; ++i);
    for(len = ++i; i < N && halfsort[i] == origin[i]; ++i);
    len = i == N ? len + 1 : 0;
    if(len)          
    {
        puts("Insertion Sort");
        qsort(origin, len, sizeof(int), comp);
    }
    else
    {
        puts("Merge Sort");
        for(len = 1, i = 0; i < N && len <= N; len *= 2)
        {
            for(i = 0; i < N && origin[i] == halfsort[i]; ++i) ; 
            for(j = 0; j < N / len; ++j)
                qsort(origin + j * len, len, sizeof(int), comp);
            qsort(origin + j * len, N % len, sizeof(int), comp);
        }
    }
    for(int i = 0; i < N; ++i) 
        printf("%d%c", origin[i], i == N - 1 ? '\n' : ' ');
    return 0;
 }
