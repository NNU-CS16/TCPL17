#include <stdio.h>

int main()
{
    int a[2]={0,0};
    int n=0;
    char c=getchar();
    while (c!='\n')
    {
        if (c>='A'&&c<='Z')
            n=c-64+n;
        if (c>='a'&&c<='z')
            n=c-96+n;
        c=getchar();
    }
    while (n>0)
    {
        a[n%2]++;
        n>>=1;
    }
    printf("%d %d\n",a[0],a[1]);
    return 0;
} 
