#include<stdio.h>
int main()
{
   int i=0;
   char c;
   while(c!='.')
   {
      scanf("%c",&c);
         if(c!=' ')
            i++;
         else
         {   
            printf("%d ",i);
            i=0;
         }
       
   }
   printf("%d\n",i-1);
return 0;
}
