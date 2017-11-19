#include<stdio.h>

int main()
{
   int a,b,n,d;
   int ab[100]={};
   int i=1;
   scanf("%d%d%d",&a,&b,&n);
   d=a+b;
   ab[0]=d%n;
   while(d/n!=0)
{
   d=d/n;
   ab[i]=d%n;
   i++;
}
   int j;
   j=i-1;
   for(j=i-1;j>=0;j--)
{
        printf("%d",ab[j]);
}
        return 0;
}
