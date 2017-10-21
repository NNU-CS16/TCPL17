#include <stdio.h>
int main()
{
    int x,i,j;

    for(i=1;i<=9;i++)
       for(j=1,x=0;j<=i;j++)
       {
          x=i*j;
          if(j==1)
             printf(" \n");
          printf("%d*%d=%d ",j,i,x);
       }
       printf("\n");

    return 0; 
}
