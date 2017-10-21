#include<stdio.h>
int main()
{
    int b,i,x,c=0,a[100];
    scanf("%d",&b);
    x=b;
    while(b!=0)
    {
        i=b%2;
        a[c]=i;
        c++;
        b=b/2;
    }
    c--;
    for(;c>=0;c--)
    {
        printf("%d",a[c]);
    }
    printf("\n");
    printf("%o\n%X\n",x,x);
    return 0;
}

