#include<stdio.h>

int LCM(int m,int n)
{
int i,a,e,f,LSM,M,N;
i=m%n;

while(i)
{
M=n;
N=i;
a=N;
i=M%N;
}
e=m/a;
f=n/a;
LSM=e*f*a;
return LSM;
}
int main()
{
printf("输入两个正整数m,n:");
int m,n;
scanf("%d%d",&m,&n);
printf("最小公倍数为：%d\n",LCM(m,n));
return 0;
}

