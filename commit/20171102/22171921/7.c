#include<stdio.h>
int GCD_recursive(int m, int n)
{
return m%n==0?n:GCD_recursive(n,m%n);
}
int GCD_iterative(int m, int n)
{
int a=0;  
while(n)
{  
a=m%n;  
m=n;  
n=a;  
}  
return m;
}
int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("%d\n%d\n",GCD_recursive(m,n),GCD_iterative(m,n));
return 0;
}  
