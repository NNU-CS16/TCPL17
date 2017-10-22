#include <stdio.h>
int main()
{
   int x,y,z=0;
   for(x=1;x<=9;x++)
       for(y=1;y<=9;y++,z++)
       {
         if(z&&y%9==0)
          printf ("\n");
          printf("%d\t",x*y);
       }
      printf("\n");
      return 0;
}


