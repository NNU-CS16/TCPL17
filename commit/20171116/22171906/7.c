#include <stdio.h>
#include <string.h>

int main ()
{
    char a[1000],b[1000],c[1000];
    int i, j, k=0, r=0;
    for (i=strlen(a)-1,j=strlen(b)-1;i>=0&&j>=0;i--,j--)
    {   
        int p=(a[i]-'0')+(b[j]-'0')+r;
        r=p/10;
        c[k++]=p%10;
        i--;
    }
    while (j>=0)
    {
        int p=(b[j]-'0')+r;
        r=p/10;
        c[k++]=p%10;
        j--;
    }
    if (r)
    {
        c[k++]=r;
    }
    for (int i=k-1;i>=0;i--)
    {
        printf("%s ",c[i]);
    }
    return 0;
}
