#include<stdio.h>
#include<math.h>
int is_prime(int n); 
int main()
{

int n=4,j=0;

int a[2000];
 a[0]=2;
 a[1]=3;
int i=2;
while (i<1000)
{
  if(is_prime(n)==0)
 { a[i]=n;
  i++;
  n++;
  continue;}
 else 
  n++;
}   
for(i=99;i<1000;i++,j++)
{if(j&&j%10==0)
printf("\n");
printf("%d ", a[i]);
}
printf("\n");
return 0;
}

int is_prime(int n)
{

int i;
for(i=2;i<=sqrt(n);i++)
   {
   if(n%i==0)
      return -1;}
     return 0;
}
   










 
