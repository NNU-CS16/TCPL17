#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,m,n;
    scanf("%d%d%d",&a,&b,&c);
    m=pow(a,b);
    n=m%c;
    printf("n=%d\n",n);

    return 0;
}

