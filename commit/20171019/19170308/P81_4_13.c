#include <stdio.h>
#include <math.h>
int sushu(int n)
{
  int m;
  for(m=2;m<=sqrt(n);m++)
   {
     if(n%m==0)
      return 0;
   }
    return 1;
}

int main()
{
  int a;
  printf("请输入：a: ");
  scanf("%d",&a);
  if(sushu(a))
   printf("%d is a sushu\n",a);
  else 
   printf("%d is not a sushu\n",a);
  
  return 0;
}
