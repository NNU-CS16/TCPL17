#include<stdio.h>
int main()
{
    int a,b,c,m,n;
    printf("m=");
    scanf("%3d",&m);

    a=m/100;
    b=(m-a*100)/10;
    c=m-a*100-b*10;
    printf("%dn=%d%d%d\n",m,c,b,a);

    if(c==0)
{
    if (b==0)
    printf("%dn=%d\n",m,a);
    else  printf("%dn=%d%d\n",m,b,a);
}
    return 0;
}

