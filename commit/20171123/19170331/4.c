#include <stdio.h>
int add(int n1,int n2)
{
    int sum,tem;
    if (n2==0)
        return n1;
    else 
    {
        sum=n1^n2;
        tem=(n1&n2)<<1;
        return add(sum,tem);
    }
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d\n",add(n1,n2));
    return 0;
}
