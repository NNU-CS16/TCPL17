#include<stdio.h>
#include<math.h>
int is_prime(int n);

int main()
{
  int i=0,n=2;
  scanf("%d",&n);
  while (i<=1000)
  {
    if (is_prime(n)==0)
     {
         i++;
       if (i>=100)
        {
          printf("%d\n",n);
         } 
         n++;
     }
     return 0;
  } 
}

int is_prime(int n)
{
  int m;
  for (m=2; m<=sqrt(n); m++)
  {
     if (n % m==0)
     return 0;
   }
     return -1;
}
