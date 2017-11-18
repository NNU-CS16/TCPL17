#include<stdio.h>
void zhuan(int n,int d);
int main()
{

int n,a,b,d;
scanf("%d %d %d", &a,&b,&d);
n=a+b;
zhuan(n, d);
printf("\n");
return 0;
}
void zhuan(int n,int d)
{
int x,i;
int a[10000];
for(i=0;n>0;i++)
   {a[i]=n%d;
    n/=d;}

for(x=i;x>=0;x--)
  printf("%d", a[x]);
}
