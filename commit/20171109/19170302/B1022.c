#include<stdio.h>
void djingzhi(int n,int m);
int main()
{
        int a,b,d;
        scanf("%d%d%d",&a,&b,&d);
        djingzhi(a+b,d);
        printf("\n");
        return 0;
}
void djingzhi(int n,int m)
{
        int str[100];
        int i=0,j;
        while(n!=0)
        {
                str[i]=n%m;
                n=n/m;
                i++;
        }
        for(j=i-1;j>=0;j--)
                printf("%d",str[i]);
}
