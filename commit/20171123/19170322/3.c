    #include <stdio.h>
    int sum(int n)
    {
        int num = 0;
	(n >0) && (num = n + sum(n - 1));
	return num;
    }
    int main( )   
    {   
	int n;
	printf("please input n:");
	scanf("%d", &n);
	printf("%d\n", sum(n));
	return 0;
    }
