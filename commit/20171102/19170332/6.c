#include<stdio.h>
int is_prime(int n)
{
int i;
for(i=2;i<=n-1;i++)
  if(n%i==0)
  break;
 
if(i<n)
return -1;
else
return 0;
}
int main()
{
int l,k=0;
for(l=2;l<=10000;l++)
   {
      if(is_prime(l)==0)
        {k=k+1;
         if(k>=100&&k<=1000)
         {
            printf("%d ",l);

           if (k==1000)
          break;
         }
        }
   }
 printf("\n");
 return 0;
}

