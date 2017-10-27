#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int prime(int);

int main()
{
  int r;
  srand(time(NULL));
  r=rand()%1000;
  if(prime(r))
    printf("%d is prime.\n",r);
  else
    printf("%d is not prime.\n",r);
  return 0;
}
int prime(int n)
{
  int m;
  for(m=2;m<=sqrt(n);m++)
  {
    if(n%m==0)
      return 0;
  }
  return 1;
}
