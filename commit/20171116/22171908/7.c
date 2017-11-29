#include<stdio.h>
#include<string.h>
int main()
{
    char t1[1000],t2[1000];
    int a[1000]={0},b[1000]={0},c[1010]={0};
    int i,la,lb,len;
    scanf("%s%s",t1,t2);
    la = strlen(t1);
    lb = strlen(t2);
    for (i=0; i<la; i++)
        a[i] = t1[la-1-i]-48;
    for (i=0; i<lb; i++)
        b[i] = t2[lb-1-i]-48;
    if(la>lb)
        len = la;
    else
        len = lb;
    for( i=0; i<len; i++)
    {
        c[i] += a[i] + b[i];
        c[i+1] = c[i]/10;
        c[i] = c[i] % 10;
    }
    if (c[i] > 0)
        len ++;
    for ( i=len-1; i>=0; i--)
        printf("%d",c[i]);
    printf("\n");
    return 0;
}
