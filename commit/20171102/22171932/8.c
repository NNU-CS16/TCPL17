#include<stdio.h>
int LCM(int m, int n);
int main()
{
int m,n,a;
printf("请输入m和n:\n");
scanf("%d%d",&m,&n);
a=LCM(m,n);
printf("m和n的最小公倍数为:%d\n",a); 
return 0;
}
int LCM(int m, int n)
{
int i,j,a,b;
    a=m;
    b=n;
    do
    {
    if(m<n)
      n=n%m,i=n;
    else m=m%n,i=m;
    }
    while(i!=0);
    if(i==n)
      i=m;
    else
      i=n;
    j=(a*b)/i;
    return j;
}

