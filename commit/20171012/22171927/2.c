#include<stdio.h>
int main()
{
   int a=1;
   int b=2;
   int c=3;
   int d;
   int sum=0;

   while(a<=97)
 {
    d=a*b*c;
    a+=3;
    b+=3;
    c+=3;
    sum=sum+d;
 }  
   printf("d=%d\n",sum);
   
   return 0;
 }
