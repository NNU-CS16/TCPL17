#include<stdio.h>
#include<math.h>
int main()
{
  int a,n,y,i,sum=0;
  printf("Input the value of n,a\n");
  scanf("%d%d",&n,&a);
  for(i=0;i<=n-1;i++)
  {
   y=pow(10,i);
   sum+=y*(n-i)*a;
  }
   printf("%d\n",sum);
   return 0;
}
