#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    int n0=0,n1=0,len,i,s=0;
    int num[26],a[1000];
    scanf("%[^\n]",str);
    len=strlen(str);
    for(i=0;i<=25;i++)
        num[i]=i+1;
    for(i=0;i<=len-1;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            s+=num[str[i]-'a'];
        if(str[i]>='A' && str[i]<='Z')
            s+=num[str[i]-'A'];
    }
    for(i=0;s!=0;i++)
    {
        a[i]=s%2;
        s/=2;
    }
    for(int j=0;j<=i-1;j++)
    {
        if(a[j]==0) n0++;
        if(a[j]==1) n1++;
    }
    printf("%d %d\n",n0,n1);
    return 0;
}
