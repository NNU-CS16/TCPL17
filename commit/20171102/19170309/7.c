#include<stdio.h>
int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n); 
int main()
{

int m,n;
scanf("%d %d", &m,&n);
printf("%d\n", GCD_recursive(m,n));
printf("%d\n", GCD_iterative(m,n));
return 0;
}

int GCD_recursive(int m, int n)
{
int t;
while(n>0)
  {t=m%n;
   m=n;
   n=t;}
return m;
} 

int GCD_iterative(int m, int n)
{

if(m==0)
  return n;
  return GCD_iterative(n%m,m);

} 





