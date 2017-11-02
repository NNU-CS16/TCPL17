#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,m,i;
    scanf("%d %d %d",&a,&b,&c);
    int n=a;
    for(i=1;i<b;i++)
    {
       n=n*a;
    }
    printf("%d\n",n);
    m=n%c;
    printf("%d\n",m);
    return 0;
}
