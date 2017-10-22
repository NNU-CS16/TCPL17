#nclude<stdio.h>
int main()
{
  int a,b,x,y,z;
  scanf("%d/%d",&a,&b);

  x=a;
  y=b;

  while(y!=0)
   {
     z=x%y;
     x=y;
     y=z;
    }

  a=a/x;
  b=b/x;
  printf("%d/%d\n",a,b);
  return 0;
 }
#include<stdio.h>
int main()
{
  int a,b,x,y,z;
  scanf("%d/%d",&a,&b);

  x=a;
  y=b;

  while(y!=0)
   {
     z=x%y;
     x=y;
     y=z;
    }

  a=a/x;
  b=b/x;
  printf("%d/%d\n",a,b);
  return 0;
 }
include<stdio.h>
int main()
{
  int a,b,x,y,z;
  scanf("%d/%d",&a,&b);
 
  x=a;
  y=b;

  while(y!=0)
   {
     z=x%y;
     x=y;
     y=z;
    }
  
  a=a/x;
  b=b/x;
  printf("%d/%d\n",a,b);
  return 0;
 }




