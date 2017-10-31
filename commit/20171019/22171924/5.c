#include <stdio.h>
#include <math.h>
int main()
{
   char i=0;
   int j= 0;
   
   while(i != '.')
   {
    scanf("%c",&i);
   
    if (i == '.')
   {
    printf("%d",j);
    break;
   }
      
   else if (i != ' ')
   {
     j++;
   }
     
   else if (j != 0)
   {
     printf("%d ",j);
     j = 0;
   }

  else
  continue;
   }
   
  printf("\n");
  
 return 0;
}
