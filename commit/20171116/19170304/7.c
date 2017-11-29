#include<stdio.h>
#include<string.h>

int main()
{
    char A[1000],B[1000];
    int a[1000]={0},b[1000]={0},sum[1001]={0};
    int i,lena,lenb,lentemp;
    scanf("%s%s",A,B);

    lena=strlen(A);
    lenb=strlen(B);

    for (i=0;i<lena;i++)
        a[i]=A[lena-1-i]-48;

    for (i=0;i<lenb;i++)
        b[i]=B[lenb-1-i]-48;

    if (lena>lenb) 
        lentemp=lena;
    else  
        lentemp=lenb;

    for (i=0;i<lentemp;i++)
        sum[i]=a[i]+b[i];

    for (i=0;i<lentemp;i++)
    {
        if (sum[i]>=10)
        {
            sum[i]%=10;
            sum[i+1]++;
        }
    }

    if (sum[lentemp]!=0)
        printf("%d",sum[lentemp]);

    for (i=lentemp-1;i>=0;i--)
        printf("%d",sum[i]);
    printf("\n");
    return 0;
}
