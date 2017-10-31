#include <stdio.h>
#include <math.h>

int main()
{
    double R1, P1, R2, P2, a, b;
   
    scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);
    a = R1 * R2 * cos(P1 + P2);
    b = R1 * R2 * sin(P1 + P2); 
    if (fabs(a) < 0.01) 
      a = 0;
    if (fabs(b) < 0.01)
      b = 0; 

    if (a == 0 && b == 0) 
        printf("0");
    else if (a == 0 && b != 0) 
        printf("0.00%+.2fi", b);
    else if (a != 0 && b == 0)
        printf("%.2f+0.00i", a);
    else
        printf("%.2f%+.2fi",a, b);

    return 0;
}
