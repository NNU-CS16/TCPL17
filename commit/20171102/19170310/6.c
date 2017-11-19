#include<stdio.h>
#include <math.h>
int is_prime(int n）
{
  int i,a，count=0;
  if(n>=4)
  {
   for(i=2;i<=sqrt(n);i++)
    {
    a=n%i;
    if(a==0)
    count++;  
    }
    if(count>0)
      return -1;
    else
      return 0;
   }
      else
      return 0;
}
int main()
{
 int n,b,c;
 scanf("%d\n",&n)
 b=0;
 for(c=2;c<100000;c++)      
 { 
  if(is_prime(l)==0)
  {     
   b=b+1;
   if(b>=100&&b<=1000)	        
   {
    printf("%d\n",c);
    if(b==1000);
    break;
    }
   }
  }
return 0;
} 
