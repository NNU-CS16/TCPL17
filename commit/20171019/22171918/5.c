#include <stdio.h>
int main ()
{
  char c;
  int i=0;
  c=getchar();
  while (c!='.')
  {
   if (c!=' ') i++;
   else if (i!=0)
         {
           printf("%d",i);
           i=0;
         }
   c=getchar();
   if (c!=' '&&i==0) 
      printf(" ");
  }
    if (i!=0) printf("%d\n",i);
    return 0;
}
