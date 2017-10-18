#include<stdio.h>
int main ()
{
        int i=1,j=1,a;
        for(i=1;i<=9;i++)
        {
         for( j=1;j<=i;j++)
                {a=i*j;
                printf ("%d*%d=%2d",i,j,a);}

        printf("\n");
        }

        return 0;

}

