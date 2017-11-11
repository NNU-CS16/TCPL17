#include<stdio.h>
int is_pow2(int n)
{
  if(n!=1)
  m=n%2;
  if(m!=0)
  break; 
  if(m==0)
  n=n/2;
  if(n=1&&m==0)
  printf("The power square of the number is two");
  else
  {
  printf("The power square of which the number is not two");
   }
}
int main()
{
  int m,a,n;
  scanf("%d",&n);
  printf("%d\n",is_pow2(n));
  return 0;
}
