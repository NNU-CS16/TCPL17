#include <stdio.h>
int main(void)  
	    {  
		            int a, b,i,n;  
			            scanf("%d/%d", &a, &b);  
				            for (i = 1; i <= (a > b ? b : a); i++)  
						            {  
								                if (a%i == 0 && b%i == 0)  
											                n = i;  
										        }  
					            if (a == b) printf("1/1\n");  
						            else printf("%d/%d", a / n, b / n);  
							          
							            return 0;  
								        }  
