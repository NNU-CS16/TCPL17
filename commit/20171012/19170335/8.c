#include <stdio.h>  
int main()  
{  
    int num,num1,num2;  
	          
    scanf("%d",&num);  
    num1=num/16;  
    num2=num%16;  
    printf("%d\n",num1*10+num2);  
			          
    return 0;  
}  
