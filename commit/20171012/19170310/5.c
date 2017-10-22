#include<stdio.h>


int main()
{
 int x,y,z;
 for(x=1;x<=9;x=x+1){ 

  for(y=1;y<=9;y=y+1) 
   {
   z=x*y;
   printf("%d*%d=%d\t",y,x,z);
   }
 printf("\n");
 }
 return 0;
}







