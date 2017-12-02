#include <stdio.h>
int main()
{
  int a[10], A, i=0;
  for(i=0;i<=10;i++)
   {
     scanf("%d",&a[i]);
   }
  scanf("%d",&A);
  
  int PA, XA, n, m=0;
  for(i=0;i<=10;i++)
  {
    if(a[i]==A)
      m++;
  }
  if(m==0)
    PA=0;
  if(m==1)
    PA=A;
  if(m>=2)
    for(n=2;n<=m;n++)
    {
      XA=A*10;
      PA=A+XA;
    }
  printf("%d\n",PA);
  return 0;
}
