#include<stdio.h>

int main()
{
   int a,b,c;

   printf("please input a,b,c:\n");

   scanf("%d%d%d",&a,&b,&c);

   if(a==b)  printf("C\n");

    else  if(a==c)  printf("B\n");

     else if(b==c)  printf("A\n");

     else printf("WRONG!\n");

   return 0;
}
