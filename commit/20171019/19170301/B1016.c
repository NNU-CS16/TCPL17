#include<stdio.h>	
int main()
{
  long int a, b;
  int da, db;
  scanf("%ld %d %ld %d",&a,&da,&b,&db);
  int x = 0;
  int y = 0;
  while(a!=0)
    {
      if(a%10==da)
      x = x * 10 + da;
      a = a / 10;
 }
  while(b!=0)
  {
     if(b%10==db)
     y = y * 10 + db;
     b = b / 10;
 }
   printf("%d\n",x+y);
  return 0;
}
