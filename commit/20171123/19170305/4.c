#include<stdio.h>
int add(int,int);
int main()
{
int n1,n2;
scanf("%d %d",&n1,&n2);
printf("%d\n",add(n1,n2));
return 0;
}

int add(int n1,int n2)
{
int sum;
int c;
while(n2!=0)
{
sum=n1^n2;
c=(n1&n2)<<1;
n1=sum;
n2=c;
}
return sum;
}
