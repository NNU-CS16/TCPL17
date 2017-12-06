#include "stdafx.h"
int main(int argc, char* argv[])
{  
    int i,q,sum=0;
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        if(q%i==0)
        sum=sum+i;
    }
   
     printf("%d",sum);
     return 0;
}
