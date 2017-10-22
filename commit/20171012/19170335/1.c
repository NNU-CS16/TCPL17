#include <stdio.h>
int main()
{
    int a;
    int sum=0;

    for(a=2;a<=100;a=a+2)
    sum=sum+a;

    printf("%d\n",sum);

    return 0;
}
