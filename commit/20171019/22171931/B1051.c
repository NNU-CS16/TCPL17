#include <math.h>  
#include <stdio.h>  
       
int main()  
	    {  
double a1,b1,a2,b2,a3,b3;  
scanf("%lf %lf %lf %lf",&a1,&b1,&a2,&b2);  
a3 = a1*a2*cos(b1+b2);  
b3 = a1*a2*sin(b1+b2);  
if( -0.005< a3 && a3 <= 0)  
printf("0.00");  
else  
               printf("%.2lf",a3);  
	            if( -0.005< b3 && b3 <= 0)  
	                printf("+0.00i\n");  
        else if( b3 > 0)  
               printf("+%.2lfi\n",b3);  
         else   
               printf("-%.2fi\n",-b3);  
            return 0;  
}  
