#include <stdio.h>

int main()
{
    int a,b,c,i,r;

    printf("请输入整数a b c：");
    scanf("%d%d%d",&a,&b,&c);
     
    for(i=1;i<=b;i++)
       a=a*a;
    r=a%c;
    
    printf("a的b次方取余c=%d\n",r);

    return 0;
}
