#include<stdio.h>
void step(int n);
int m;
int p[1000]={0};
int main()
{
   int n;
   scanf("%d%d",&n,&m);
   p[0]=1;
   p[1]=1;
   step(n);
   printf("%d\n",p[n]%100007);
  return 0;
}

void step(int n)
{
    if(n>1)
       step(n-1);
    int i,sum=0;
    for(i=(n>=m)?(n-m):0;i<n;i++)
           sum=sum+p[i];
    p[n]=sum;
}
