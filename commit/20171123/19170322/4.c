    #include <stdio.h>
    int add(int n1, int n2)
    {
        while(n2 != 0)
	{  
            int temp = n1 ^ n2;
	    n2 = (n1 & n2)<<1;
	    n1 = temp;
        }
	return n1;  
    }
    int main()
    {
        int n1, n2;
	printf("please input n1:");
	scanf("%d", &n1);
	printf("please input n2:");
	scanf("%d", &n2);
	printf("n1 + n2 = %d\n", add(n1, n2));
	return 0;
    }
