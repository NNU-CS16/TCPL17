#include <stdio.h>
#include <math.h>
#include <string.h>

int is_int_pal(int n)
{
    char a[256],i;
    int k=n;
    for(i=0;n!=0;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    int temp=strlen(a),m=0;
    for (i=0;i<temp;i++)
        m=m+a[i]*(pow(10,temp-1-i));
    if (k==m) return 0;
    else return -1;
}


int main()
{
    int n;
    scanf("%d",&n);
    printf("Returned value is:%d.\n",is_int_pal(n));
    return 0;
}
