#include<stdio.h>
int main()
{
    int a,i,sum=0;
    for(a=1,i=1;i<=10;++i)
    {
     a*=i;
     sum+=a;
    }
     printf("sum=%d\n",sum);
     return 0;
     
}
