#include<stdio.h>
int LCM(int m, int n); 
int main()
{
int m,n;
scanf("%d %d", &m,&n);
LCM(m, n);
return 0;
}
int LCM(int m, int n)
{
int p,r;
p=n*m;

while(m!=0)
  {r=n%m;
   n=m;
   m=r;}
printf("%d", p/n);
}
