#include <stdio.h>
int main()
{
    int m=1,n,i,j,k,t=1;
    char c;

    scanf("%d %c",&n,&c);

        while (t<=n)    {
       m+=2;
       t+=2*m;
    }
    t-=2*m;
    m-=2;
    i=0;

    while (i<m)
    {
       if (i<=m/2) 
       {
         for (j=0;j<i;j++) printf(" ");
         for (k=0;k<m-i*2;k++) printf("%c",c);
       }      
       else 
       {

         for (j=0;j<m-i-1;j++) printf(" ");
         for (k=0;k<2*(i-m/2+1)-1;k++) printf("%c",c);

       }
       printf("\n");
       i++;
    }

    printf("%d\n",n-t);

    return 0;

}

