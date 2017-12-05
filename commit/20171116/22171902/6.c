#include<stdio.h>
#include<string.h>
void k_reverse(char* str, int k);
int main()
{
    char str[100];
    int k;
    printf("输入一串字符：");
        gets(str);
    printf("输入每（）个字符反转数");
        scanf("%d",&k);
    k_reverse(str,k);
    return 0;
}

void k_reverse(char* str, int k)
{
    int n=strlen(str);
    int a=n/k;
    int b=n%k;
    int i,j;
    int count=0;
    for(i=0;count<a;i+=k)
    {
     count++;
     for(j=i+k-1;j>=i;j--)
        printf("%c",str[j]);
    }
    for(i=n-b;i<=n;i++)
        printf("%c",str[i]);
}


