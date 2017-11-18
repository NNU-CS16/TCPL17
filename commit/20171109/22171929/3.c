#include <stdio.h>
int step(int a);
int main()  
{  
    int n,m,b;
    scanf("%d",&n);
    b=step(n);
    b=b%100007;
    printf("%d",b);
    return 0;
}
int step(int a)
{
    if (a==1)
        return 1;
    else if (a==2)
        return 2;
    else return step(a-1)+step(a-2);
}
