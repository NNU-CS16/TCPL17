#include<stdio.h>

int main()

{

int a,n,b,c,sum;

b=1;

sum=0;

c=a;

printf("Please input a,n:");

scanf("%d,%d",&a,&n);

while(b<=n+1)

{

sum=sum+c;

c=c*10+a;

b=b+1;

}

printf("sum=%d\n",sum);

return 0;

}
