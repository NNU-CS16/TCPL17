#include<stdio.h>
int main()
{
int i,j,k;
        for (i=1;i<10;i++)
         {
          for (j=1;j<=i;j++)
             {
               k=j*i;
               printf("%d*%d=%d\t",j,i,k);
             }
          printf("\n");
            
         }
return 0;
}
