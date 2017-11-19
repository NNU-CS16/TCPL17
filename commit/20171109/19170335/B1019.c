    #include <stdio.h>
    int zeng(int a[])
    {
        int i, j, temp;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3 - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp =a[j];
                    a[j] = a[j +1];
                    a[j + 1] = temp;
                }
            }
        }
        return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    }
    
    int jian(int a[])
    {
        int i, j, temp;
        for (i = 0; i <3; i++)
        {
            for (j = 0; j < 3 - i; j++)
            {
                if (a[j] < a[j +1])
                {
                    temp = a[j];
                    a[j] = a[j +1];
                    a[j + 1] = temp;
                }
            }
        }
        return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    }
    void shuzu(int a[], int n)
    {
        a[0] = n / 1000;
        a[1] = n /100 % 10;
        a[2] = n /10 % 10;
        a[3] = n % 10;
    }
    int black_hole(int a[],int n)
    {
            if(n == 6174)
                return 0;
            else
            {
                shuzu(a, n);
            
            
                printf("%04d - %04d = %04d\n",jian(a),zeng(a),jian(a) - zeng(a));
                black_hole(a,jian(a) - zeng(a));
            }
    }
    int main()
    {
        int n;
        int a[4];
        scanf("%d",&n);
        shuzu(a, n);
        if (a[0] == a[3] && a[1] == a[2] && a[0] == a[1])
        {
            printf("%04d - %04d = 0000\n",n,n);
            return 0;
        }
        black_hole(a, n);
        return 0;

    }



