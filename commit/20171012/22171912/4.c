#include <stdio.h>

int main()
{
    int sum=0,x=1,i=0;

    printf("以下求和1!+2!+…+10!\n");

    while(i<10)
    {
        i++;
        x=x*i;
        sum=sum+x;
    }
    printf("sum=%d\n",sum);

   return 0;
}
