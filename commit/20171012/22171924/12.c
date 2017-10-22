#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d/%d",&a,&b);

    for(c=b;c>=2;c--)
{
    if(a%c==0&&b%c==0)
{
    a=a/c;
    b=b/c;
}
}
    printf("%d/%d",a,b);
     
    return 0;
}
