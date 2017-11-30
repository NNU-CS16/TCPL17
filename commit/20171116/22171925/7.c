#include<stido.h>
#include<string.h>
int main()
{
    char m[1000], n[1000];
    int a[1000]={0}, b[1000]={0}, sum[1001]={0};
    int i, la, lb, ler;
    scanf("%s%s", m, n);
    la = strlen(m);
    lb = strlen(n);
    for (i=0; i<la; i++)
        a[i] = m[la-1-i] - 48;
    for(i=0; i<lb; i++)
        b[i] = n[lb-1-i] - 48;
    if (la > lb) ler = la;
    else ler = lb;
    for(i=0; i<ler; i++)
     sum[i]=a[i]+b[i];
    for(i=0;i<ler;i++)
    {
        if(sum[i]>=10)
        {
            sum[i]%=10;
            sum[i+1]++;
        }
    }
    if(sum[ler]!=0)
        printf("%d",sum[ler]);
    for(i=ler-1;i>=0;i--)
        printf("%d",sum[i]);
    printf("\n");
    return 0;




}
