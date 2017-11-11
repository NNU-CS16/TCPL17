#include <stdio.h>

    int count1_in_bin(int n) 
{  
    int m = 0;  
	
    while (n)  
    {  
        m++;  
        
        n = n&(n - 1);
    }  
    return m;  
}  
    int main()  
{  
    printf("%d\n", count1_in_bin(12)); 
	
    printf("%d\n", count1_in_bin(0));  
	
    printf("%d\n", count1_in_bin(-1));  

    return 0;  
}
