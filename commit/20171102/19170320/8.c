/*算法是最小公倍數=兩個整數的乘機/最大公約數*/
#include <stdio.h>
int LCM(int m,int n);
int main()
{
    int m,n,x,y;
    printf("m,n=");
    scanf("%d,%d",&m,&n);
    x=m;
    y=n;
    printf("%d",x*y/LCM(m,n));
    return 0;
}
int LCM(int m,int n)
{
    int r;
    if (m<n)
    {
        r=m;
        m=n;
        n=r;
    }
    while (n!=0)
    {
        r=m;
        m=n;
        n=r%n;
    }
}
