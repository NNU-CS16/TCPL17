#include<stdio.h>
int sum(int);
int mal(int,int);
int mal8(int,int);
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",(sum(n)+n)>>1);
return 0;
}

int sum(int n)
{
int r;
r=mal8(n,0)+mal8(n,8)+mal8(n,16)+mal8(n,24);
return r;
}

int mal8(int n,int i)
{
int p;
p=mal(n,i)+mal(n,i+1)+mal(n,i+2)+mal(n,i+3)+mal(n,i+4)+mal(n,i+5)+mal(n,i+6)+mal(n,i+7);
return p;
}


int mal(int n,int i)
{
int m;
m=((0-((n>>i)&1))&n)<<i;
return m;
}
