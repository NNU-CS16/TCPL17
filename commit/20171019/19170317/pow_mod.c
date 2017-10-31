#include<stdio.h>
#include<math.h>
int mod(int,int);
int main()
{
    long double a,b;
    int n,c,i;
    printf("请输入三个整型数据a,b,c:");
    scanf("%Lf%Lf%d",&a,&b,&c);
    n=(int)(pow(a,b));
    i=mod(n,c);
    printf("%d\n",i);
    return 0;
}
int mod(int x,int y)
{
    int z;
    z=x%y;
    return z;
}

