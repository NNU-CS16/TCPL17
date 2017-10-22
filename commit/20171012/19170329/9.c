#include<stdio.h>
int main()
{
   float f1;
   int i;
   char c;
   float f2;
   

   scanf("%f %d %c %f",&f1,&i,&c,&f2);
   printf("%c %d %.2f %.2f",c,i,f1,f2);
   
   return 0;
}
