#include<stdio.h>
int is_prime(int n);
int main()
{
  int n=2,i=0;
  while(i<=1000)
   {
        if(is_prime(n)==0)
           {
               i++;
               if (i>=100)
                 printf("%d\n",n);
           }
      n++;
   }
  return 0;

}

int is_prime(int n)
{
int i;
for(i=2;i<n-1;i++)
if (n%i==0)
  break;
if (i<n)
  return 0;
else 
  return -1;

}
