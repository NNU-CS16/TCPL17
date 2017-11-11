#include<stdio.h>

int MAXG(int m,int n)
{       int i;
        while(n!=0)
        {i=m%n; m=n; n=i;}
        return m;
}

int LCM(int m, int n)
{
int k=MAXG(m,n);
int j;
j=m*n/k;
printf("%d",j);
}

int main()
{
int m,n;
scanf("%d%d",&m,&n);
LCM(m,n);
}
