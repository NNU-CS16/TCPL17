    #include <stdio.h>
    int main()
    {
        int j= 0, n, i, a, b;
        int count = 0;
        int dan[100000] = {0};
        int couple[100000];
        int man[100000] = {0};
        scanf("%d",&n);
        for (i = 0; i < 100000; i++)
            couple[i] = -1;
        for (i = 0; i < n; i++)
        {
            scanf("%d%d", &a, &b);
            couple[a] = b;
            couple[b] = a;
        }
        int m;
        scanf("%d", &m);
        for (i = 0; i < m; i++)
        {
            scanf("%d", &a);
            man[a] = 1;
        }
        
        for (i = 0; i < 100000; i++)
        {
            if (man[i] == 1 && man[couple[i]] != 1)
            {
                count++;
                dan[j] = i;
                j++;
            }
        }
        printf("%d\n",count);
        for (i = 0; i < j - 1; i++)
            printf("%05d ",dan[i]);
        printf("%05d",dan[j - 1]);
        return 0;
    }
