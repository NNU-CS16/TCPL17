#include<math.h>
#include<stdio.h>
int main()
{
    int x,a,b,c;

    printf("x,a,b,c=");
    scanf("%d%d%d%d/n",&x,&a,&b,&c);
    if (sqrt(fabs(x))!=(4*a)/(b*c))
        printf("!=\n");
    else 
        printf("==\n");

    return 0;
}
