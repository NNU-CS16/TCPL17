#include <stdio.h>
int main()
{
    int a,b,c,d;
    int i=0;
    int s[100];
    scanf("%d%d%d",&a,&b,&d);
    c=a+b;
    if (c==0)
    {
        printf("%d",c);
    return 0;
    }
    while (c!=0)
    {
        s[i]=c%d;
        c=c/d;
        i++;
    }
    i=i-1;
    for (;i!=-1;i--)
        printf("%d",s[i]);
    return 0;
}
