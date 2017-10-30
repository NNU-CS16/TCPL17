#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,y;
    printf("请输入a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    x=pow(a,b);
    y=x%c;
    printf("%d",y);
   return 0;
}

