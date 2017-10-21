#include<stdio.h>
int main()
{
  int i,y=1,sum=0;
  for(i=1;i<=10;i++)
  {
   y=y*i;
   sum+=y;
  }
   printf("%d\n",sum);
   return 0;
}
