    #include<stdio.h>
    int Fid(int n, int a, int b)
    {
        if(n <= 2)
	    return b;
	else
	    return Fid(n - 1, b, a+b);
    }
    int main()
    {
	int n;
	printf("please input n: ");
	scanf("%d",&n);
	printf("Fid(n)=%d\n",Fid(n, 1, 1));
        return 0;
    }
