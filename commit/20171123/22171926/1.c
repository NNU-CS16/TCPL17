#include<stdio.h>
int f(int);
int main()
{
int N,i;
int sum=0;
scanf("%d",&N);
for(i=1;i<=N;i++)
sum=sum+f(i);
printf("%d\n",sum);
return 0;
}

int f(int x)
{
int i;
for(i=x;i>0;i--)
{
if(x%i==0&&i%2!=0)
return i;
}
}
