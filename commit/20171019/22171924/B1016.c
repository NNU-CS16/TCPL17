#include <stdio.h>
int num(long int x,int y)
{
    int i=0;
    while (x>0)
   {
    if (x%10==y)
    i++;
    x=x/10;
   }
    return i;
}
   int main()
{
   int j,A,B,Da,Db,Ta=0,Tb=0;
   scanf("%d%d%d%d",&A,&Da,&B,&Db);
  
   for (j=1;j<=num(A,Da);j++)
   Ta=Ta*10+Da;
   for (j=1;j<=num(B,Db);j++)
   Tb=Tb*10+Db;
  
   printf("%d\n",Ta+Tb);
  
   return 0;
}
