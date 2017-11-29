#include<stdio.h>
#include<string.h>
int main()
{
    char A[1000],B[1000];
    int a[1000]={0},b[1000]={0},sum[1001]={0};
    int i,la,lb,ler;
    scanf("%s%s",A,B);
    la=strlen(A);
    lb=strlen(B);
    for(i=0;i<la;i++)
        a[i]=A[la-1-i]-48;
    for(i=0;i<lb;i++)
        b[i]=B[lb-1-i]-48;
    if(la>lb) ler=la;
    else ler=lb;
    for(i=0;i<ler;i++)
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
