    #include <stdio.h>
    int is_int_pal(int n)
    {
        int a[20], b[20];
        int i = 0, j = 0, k;
        while(n > 0)
        {
            a[i] = n % 10;
            n = (n - n % 10) / 10;
            i++;
        }
        i--;
        k = i;
        while(j <= k)
        {
            b[j] = a[i];
            i--;
            j++;
        }
        for(i = 0; i <= k; i++)
        {
            if(a[i] != b[i])
            {
                return -1;
                break;
	    }
            if(i == k)
            {
                return 0;
                break;
	    }
        }
    }
    int main()
    {
        int n, result;
        printf("please input n:");
        scanf("%d", &n);
        result = is_int_pal(n);
        printf("%d\n", result);
        return 0;
    }
