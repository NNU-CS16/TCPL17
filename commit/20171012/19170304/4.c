#include<stdio.h>
int main()
{
    int n,a=1,sum=0;

    for(n=1;n<=10;n++)
       {
         a=a*n;
         sum=sum+a;
                    }

     printf("sum=%d\n",sum);

     return 0;
}


