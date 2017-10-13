#include <stdio.h>
int main()
{
    int a,b,m;
    scanf("%d,%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    m=b;
    b=a;
    a=m;
    printf("a=%d,b=%d\n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);

    return 0;
}
