#include<stdio.h>
#include<string.h>

void k_reverse(char *str,int k)
{
    int len=strlen(str);
    int i,j,n=0,m=len/k;
    int a[m][k];
    for(i=0;i<m;i++)
    {
        for(j=0;j<k;j++)
        {
            a[i][j]=str[n];
            n++;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=k-1;j>=0;j--)
            printf("%c",a[i][j]);
    }
    if(len%k!=0)
    {
        for(i=m*k;i<len;i++)
            printf("%c",str[i]);
    }
}

int main()
{
    char str[1000];
    int k;
    scanf("%d %s",&k,str);
    k_reverse(str,k);
    printf("\n");
    return 0;
}
