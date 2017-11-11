    #include <stdio.h>
    int count1_in_bin(int n)
    {
        int s[40], i = 0, j, k = 0;
        while(n > 0)
        {
            s[i] = n % 2;
            n = (n - n % 2) / 2;
            i++;
        }
        i = i - 1;
        for(j = 0; j <= i; j++)
	if(s[j] == 1)
	    k = k + 1;
        return k;
    }
    int main()
    {
        int n, result;
        printf("please input n :");
        scanf("%d", &n);
        result = count1_in_bin(n);
        printf("二进制表达中1的个数为：%d\n", result);
        return 0;
    }
