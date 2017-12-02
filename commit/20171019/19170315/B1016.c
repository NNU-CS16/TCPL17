#include <stdio.h>
int main()
{
  int a[9], A, i=0;
  for(i=0;i<=9;i++)
   {
     scanf("%d",&a[i]);
   }
  scanf("%d",&A);
 
  int PA, XA, n, m=0;
  for(i=0;i<=9;i++)
    if(a[i]==A)
     {
      m++;
     }

  if(m==0)
    PA=0;
  if(m==1)
    PA=A;
  else
    for(n=2;n<=m;n++)
    {
      XA=A*10;
      PA=A+XA;
    }
 
  int b[9], B;
  for(i=0;i<=9;i++)
  {
    scanf("%d",&b[i]);
  }
  scanf("%d",&B);
 
  int PB, XB,r,t=0;
  for(i=0;i<=9;i++)
    if(b[i]==B)
     {
      t++;
     }

  if(t==0)
    PB=0;
  if(t==1)
    PB=B;
  else
   {
    for(r=2;r<=t;r++)
    {
      XB=B*10;
      PB=B+XB;
    }
   }

  int s;
  s=PA+PB;
  printf("%d\n",s);
  return 0;
}
