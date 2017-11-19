    #include<stdio.h>
    int step(int n, int a, int b)
    {
        if(n == 1)
	    return b;
	else
	    return step(n - 1, b, a + b);
    }
    int main()
    {
	int n;
        printf("please input N:");
	scanf("%d",&n);
	printf("steps=%d\n",step(n, 1, 1)%100007);
	return 0;
    }
