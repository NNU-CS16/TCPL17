#include<stdio.h>
int main()
{

    int a,b,c,d=0,s=0;

    for(a=1,b=2,c=3;a<=97;a+=3,b+=3,c+=3)
{
    d=a*b*c;
    s+=d;
}
    printf("%d\n",s);

    return 0;
}
