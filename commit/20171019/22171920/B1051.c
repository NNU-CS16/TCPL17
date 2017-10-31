#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
#include<math.h>  
int main()  
{  
     double r1, p1, r2, p2, a, b;  
     printf("输入两个复数的R1,P1,R2,P2,数字间以空格分隔:");
     scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);  
     a = r1*cos(p1)*r2*cos(p2) - r1*sin(p1)*r2*sin(p2);  
     b = r1*cos(p1)*r2*sin(p2) + r2*cos(p2)*r1*sin(p1);  
     if (fabs(a) < 0.01)   
          a = 0;  
     printf("%.2lf", a);  
     if (fabs(b) < 0.01) b = 0;   
     if (b >= 0) printf("+");   
     printf("%0.2lf", b);  
     printf("i\n");  
     return 0;  
}  
