#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,n,s;
    s=1;
    printf("请输入a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=b;i++)
       s=s*a;
    n=s%c;
    printf("%d^%dmod%d=%d\n",a,b,c,n);
    return 0;
}
    
