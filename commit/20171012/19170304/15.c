#include<stdio.h>
#include<stdlib.h>
int main()
{

   int i;  
   char s;
   scanf("%d",&i); 
   itoa(i,s,2);


   printf("binary=%s\n",s);
   printf("octonry=%o\n",i);
   printf("hex=%x\n",i);

   return 0;
}





  

