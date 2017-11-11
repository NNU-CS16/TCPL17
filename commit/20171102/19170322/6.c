    #include <stdio.h>
    #include <math.h>
    int is_prime(int n)
    {
        int i, a, j = 0;
        if(n >= 4)
        {
            for(i = 2; i <= sqrt(n); i++)
	    {
	        a = n % i;
	        if(a == 0)
	        j = j + 1;  
	    }
            if(j > 0)
	        return -1;
            else
	        return 0;
        }
        else
            return 0;
    }
    int main()
    {  
        int l, k = 0;
        for(l = 2; l < 100000; l++)
            {
                if(is_prime(l) == 0)
	        {    
	            k = k + 1;
	            if(k >= 100 && k <= 1000)
		    {
		        printf("%d ", l);
		        if(k == 1000)
			    break;
		    }
	        }
	    }
        return 0;
    }   
