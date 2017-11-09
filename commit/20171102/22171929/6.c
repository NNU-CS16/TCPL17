#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
int a,n,j=0;
  for(n=2;j<=1000;n++)
  {
  a=is_prime(n);
  if(a==0&&j>=100)
     printf("%d ",n),j++;
  else if(a==0)
     j++;
  else continue;
  }
return 0;
}
int is_prime(int n)
{
   int i,a;
   a=sqrt(n);
   for(i=2;i<=a;i++)
   if(n%i==0)
     break;
   if(i<=a)
     return -1;
   else
     return 0;
}    
