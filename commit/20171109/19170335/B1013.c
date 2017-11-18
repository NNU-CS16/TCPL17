    #include <stdio.h>
    int su(int n)
    {
        int i;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return 0;
                break;
            }
        }
        if (i > n/2)
            return 1;
        else
            return 0;
    }
    int main()
    {
        int i,j = 0,count = 0;
        int m,n;
        scanf("%d%d",&m,&n);
        for (i = 2; ;i++)
        {
            if (su(i) == 1)
            {
                count++;
                if (count >= m && count <= n)
                {
                    j++;
                    if (j == n - m + 1)
                    {
                        printf("%d\n",i);
                        break;
                    }
                    if (j % 10 != 0)
                        printf("%d ",i);
                    else 
                        printf("%d\n",i);
                }
            }    
        }
            return 0;
    }

