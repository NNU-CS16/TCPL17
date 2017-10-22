#include<stdio.h>
int main()
{
    int a,i,x,c=0,b[100];
    scanf("%d",&a);
    x=a;
    while(a!=0)
    {
        i=a%2;
        b[c]=i;
        c++;
        a=a/2;
    }
    c--;
    for(;c>=0;c--)
    {
        printf("%d",b[c]);
    }
    printf("\n");
    printf("%o\n%X\n",x,x);
    return 0;
}

