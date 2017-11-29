    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    void BubbleSort(int *p, int left, int right)
    {
        int i, j, m, n, temp;
        m = right - left + 1;
        for (i = 1; i < m; i++)
        {
            n = left;
            for (j = 1; j <= m- i; j++)
            {   
                if (p[n] > p[n + 1])
                {
                    temp = p[n];
                    p[n] = p[n + 1];
                    p[n + 1] = temp;
                }
                n = n + 1;
            }
        }
    }
    
    int main()
    {
        int a[100];
        int *p;
        p =a;
        int i, left, right;
        scanf("%d%d", &left, &right);
        srand((unsigned) time(NULL));
        for (i = 0; i <100; i++)
            a[i] = rand() % 100;
        BubbleSort(a, left, right);
        for (i = left; i <= right; i++)
            printf("%d ", a[i]);
        printf("\n");
        return 0;
    }


