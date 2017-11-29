#include <stdio.h>
                                                      
int  main()                                                                      
{
	int i, j, k, n, c, s, d, p;                                                            
    scanf("%d", &n);                                                
    for(i = 1; i <= n; i++)                                                           
    {
		for(j = 1; j <= n; j++)                                                          
        {
			c = i;
			s = 0;
			d = j - i;                                                        
            if(c > n + 1 - j)
			{
				c = n + 1 - j;
				s = 1;
				d = i - (n + 1 - j);
			}                            
            if(c > n + 1 - i) 
			{
				c = n + 1 - i;
				s = 2;
				d = n + 1 - j -(n + 1 -i);
			}                        
            if(c > j) 
			{
				c = j;
				s = 3;
				d = n + 1 - i - j;
			}                                      
            k = 4 * (c - 1) * (n + 1 - c) + s * (n + 1 - 2 * c) + d + 1;                                
            printf("%2d",k);                                                  
         }                                                                      
         printf("\n");                                                          
     }                                                          
     return 0;                                                                   
} 
