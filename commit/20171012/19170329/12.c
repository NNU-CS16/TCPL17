#include<stdio.h>
#include <stdlib.h>
int main()
{
    int z,m,i;
    scanf("%d/%d",&z,&m);

        for(i=m;i>=2;i--)
        {
            if(z%i==0&&m%i==0)
            {
               z=z/i;
               m=m/i;
            }
        }
      printf("%d/%d",z,m);
    return 0;
}

