#include<stdio.h>
int rightrot(int x,int n)
{
int i;
for(i=1;i<=n;i++)
    x=x>>1;
 return x;
}

int main()
{
 int x,n;
 scanf("%d",&x);
 scanf("%d",&n);
 x=rightrot(x,n);
 printf("%d",x);
 return 0;
}






