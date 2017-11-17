#include<stdio.h>
int fac_bit_count(int n);

int main()
{
   int n;
   scanf("%d",&n);
   printf("%d\n",fac_bit_count(n));
   return 0;
}

int fac_bit_count(int n)
{
  int p=1,i;
  int count=0;
  for (i=1; i<=n; i++)
  {
   p=p*i;
  } 
   while (p) 
    { 
        count++;  
        p = p/10;
    }
   return count;
     
}
