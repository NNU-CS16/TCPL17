#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,n,m,i,j,k;
    n=1;
    printf("请输入数字：");
    scanf("%d",&a);
    b=(a-1)/2;
    for(i=3;i<=b;i=2*i+2)
    n++;

    m=0;
    for(g=1;g<=2*n-1;g=g+2)
        m=m+g;
    m=a-(m*2-1);

    for(c=1;c<=n;c++)
    {
        for(j=38;j>=22-c;j--)
            printf(" ");
        for(k=2*(n-c+1)-1;k>=1;k--)
            printf("*");
        printf("\n");
    }

    for(d=1;d<=n-1;d++)
    {
        for(e=1;e<=20-d;e++)
           printf(" ");
        for(f=1;f<=2*d+1;f++)
           printf("*");
        printf("\n");
    }
    if(m!=0)
    printf("%d\n",m);
    return 0;
}

