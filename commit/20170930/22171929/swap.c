#include <stdio.h>
int main()
{
    int a=3,b=5;
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
