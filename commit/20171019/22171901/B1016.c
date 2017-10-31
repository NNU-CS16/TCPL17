#include<stdio.h>
int main()
{
  int a1,a2,b1,b2;
  int x=1,temp,a3=0;
  scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
 
  while(a1>0)
   {
    temp=a1%10;
    a1=a1/10;
    if(temp==a2)
     {
      a3=temp*x+a3;
      x=x*10;
     }
   }      //算出PA
  
  
   int y=1,b3=0;
  while(b1>0)
   {
    temp=b1%10;
    b1=b1/10;
    if(temp==b2)
     {
      b3=temp*y+b3;
      y=y*10;
     }
   }          //算出PB
 printf("%d\n",a3+b3);
 return 0;
}  

