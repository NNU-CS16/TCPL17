#include <stdio.h>
#include <math.h>
int main()
{
    double R1, P1, R2, P2;         
    double A, B;

    scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);
    A = R1 * R2 * cos(P1 + P2);     
    B = R1 * R2 * sin(P1 + P2);

    if(B<0)
    { B=fabs(B);
      printf("%.2lf-%.2lfi\n", A, B);
    }
    else
      printf("%.2lf+%.2lfi\n", A, B);

    return 0;
}
