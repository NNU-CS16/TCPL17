#include<stdio.h>
int main()
{
    double a,b;
    char c;
    int d;
 
    scanf("%lf %d %c %lf",&a,&d,&c,&b);
    printf("%c %d %.2lf %.2lf\n",c,d,a,b);
    return 0;
}
