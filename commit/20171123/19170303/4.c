#include<stdio.h>
int add(int n1, int n2)
{
    int a,b;
    while(n2 != 0)
    {
        a = n1 ^ n2;//提取不同位
        b = n1 & n2;//提取进位
        n1 = a;
        n2 = b << 1;
    }
    return n1;
}
int main ()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("%d\n",add(n1,n2));
    return 0;
}
