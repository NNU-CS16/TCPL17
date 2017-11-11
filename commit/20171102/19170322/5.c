    #include <stdio.h>
    int fac_bit_count(int n)
    {
        int i, j = 0;
        double s = 1;
        for(i = 1; i <= n; i++)
	s = s * i;
        while(s >= 1)
        {
	    s = s / 10;
	    j = j + 1;
        }
        return j;
    }
    int main()
    {
        int n, result;
        printf("please input n: ");
        scanf("%d", &n);
        result = fac_bit_count(n);
        printf("n!的位数为：%d\n", result);
        return 0;
    }
