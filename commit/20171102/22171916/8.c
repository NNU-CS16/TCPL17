#include<stdio.h>
int LCM(int m,int n);
int gcd(int m,int n);
int main()
{
int m,n,k;
scanf("%d %d\n",&m,&n);
if (n>m)
  {
    k=n;
    n=m;
    m=k;
  }
 printf("%d\n",LCM(m,n));
}
int gcd(int m,int n)
{
int i;
i=m%n;
while(i)
{
m=n;
n=i;
i=m%n;
}
return n;

}
int LCM(int m,int n)
{
return m/gcd(m,n)*n;

}

