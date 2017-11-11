    #include <stdio.h>
    int is_pow2(int n)
    {
        if(n % 2 != 0)
	    return -1;
	else 
	    while(1)
	    {
	        n = n / 2;
                if(n > 2)
		{    if(n % 2 != 0)
		     {
		         return -1;
			 break;
		     }
		}
		     else 
		     {
		         return 0;
			 break;
		     }
	    }
    }
    int main()
    {
        int n, result;
        printf("input n:");
        scanf("%d", &n);
        result = is_pow2(n);
        printf("%d\n", result);
        return 0;
    }
