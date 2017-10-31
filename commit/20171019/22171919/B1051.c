#include <stdio.h>
#include <math.h>

int main()
{
    double R1, P1, R2, P2, a, b;
    int check_a = 1, check_b = 2;
    scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);
    a = R1 * R2 * cos(P1 + P2);
    b = R1 * R2 * sin(P1 + P2); 
    if (fabs(a) < 0.01) check_a = 0;
    if (fabs(b) < 0.01) check_b = 0;

    if (check_a == 0 && check_b == 0)
       printf("0");
    else if (check_a == 0 && check_b != 0) 
        printf("0.00%+.2fi", b);
    else if (check_a != 0 && check_b == 0)
        printf("%.2f+0.00i", a);
    else
        printf("%.2f%+.2fi",a, b);

    return 0;
}
