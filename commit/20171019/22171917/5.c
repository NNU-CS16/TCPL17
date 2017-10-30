#include<stdio.h>
int main()
{
   char c;
   int i=0;
   c=getchar();
   while(c!='.')
   {
     if(c!=' ')
     i++;
       else
       {
         printf("%d",i);
         i=0;
       }
   }
   c=getchar();
   if(c=='.')
   printf("%d\n",i);
   return 0;
}

   
