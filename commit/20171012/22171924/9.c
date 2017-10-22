#include <stdio.h>
int main()
{
    float f1,f2;
    int a;
    char b;
    
    scanf("%f%d %c%f",&f1,&a,&b,&f2);
    printf("%c %d %.2f %.2f\n",b,a,f1,f2);
    return 0;
}
