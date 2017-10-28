#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{

int r;
scanf("%d", &r);
if(prime(r))
  printf("%d is prime.\n", r);
else
 printf("%d is not prime.\n", r);
return 0;
}

int prime(int n)
{
int m;
for(m=2;m<=sqrt(n);m++)
{
if(n%m==0)
return 0;}
return 1;
}





