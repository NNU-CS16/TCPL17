#include <stdio.h>
#include <stdlib.h>
int main()
{
 char a='0';
 int b= 0;
while(a != '.')
{
    scanf("%c",&a);
 if (a == '.'){
  printf("%d",b);
      break;
   }
 else 
     if (a != ' ')
     {
       b++;
     }
 else {
if (b != 0)
{
printf("%d ",b);
     b = 0;
}
 else
{
 continue;
}
 }
 }
printf("\n");
return 0;
}
