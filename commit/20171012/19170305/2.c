#include<stdio.h>

int main()

{

int n,sum;

n=1;

sum=0;

while(n<=99)

{

sum=sum+n*(n+1)*(n+2);

n=n+3;

}

printf("sum=%d\n",sum);

return 0;

}
