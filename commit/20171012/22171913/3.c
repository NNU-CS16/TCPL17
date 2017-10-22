#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n,a,s=0;
    printf("Please input a,n:\n");
    scanf("%d,%d",&a,&n);
    
    for(i=0;i<=n;i++) 
    {
    m=pow(10,i);
    j=((m-1)/9)*a;
    s=s+j;
    }
    printf("a+aa+aaa+...+aa...a(n个a)=%d\n",s);
    return 0;
}
