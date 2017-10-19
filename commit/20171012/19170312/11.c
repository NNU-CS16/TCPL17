#include<stdio.h>
int main()
{
 int a;
 scanf("%d",&a);
 int b;
 int n=0;
 b=a+4;
 for(int i=a;i<b;i++)
 {
  for (int j=a;j<b;j++)
  {
   if(i==j)
   continue;
   for(int k=a;k<b;k++)
   {
    if(k=j)
    continue;
    if(k=i)
    continue;
    n++;
    if(n%6)
    {
     printf("%d",i*100+j*10+k);
    }
    else
    {
     printf ("%d\n",i*100+j*10+k);
    }
   }
  }
 }
}
