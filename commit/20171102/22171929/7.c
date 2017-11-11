#include <stdio.h>
int GCD_recursive(int m, int n);
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   GCD_recursive(a,b);
   return 0;
}
int GCD_recursive(int m, int n)
{   int r,temp;
    if(n<m)
    {
    temp=n;  
    n=m;  
    m=temp;  
    }
    while(m!=0)
    {
    r=n%m;
    n=m;
    m=r;
    }
    if(n!=1)
    printf("zui da gong yue shu wei:%d",n);
    else printf("wu zui da gong yue shu");
    return 0;
}
