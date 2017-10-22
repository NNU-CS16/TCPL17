#include<stdio.h>
int main()
{
    int n,i,sum=0;
    i=n%3;
 
    for(n=1;n<=97;n=n+3)
       if(i=1) sum=sum+n*(n+1)*(n+2);

    printf("sum=%d\n",sum);

    return 0;
}
