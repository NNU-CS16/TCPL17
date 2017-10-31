#include<stdio.h>

int main()
 {
    int  a,b,c,z;
    int m=1;
    int sum=0;
    printf("输入整数a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    for(m=1;m<=b;m++);{
    sum=sum+a*a;}
    z=sum%c;
    printf("a^b mod c的值为：%d\n",z);
    return 0;
 }










