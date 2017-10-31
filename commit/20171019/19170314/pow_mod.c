#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=pow(a,b);
    printf("%d\n",d%c);
    return 0;
}
