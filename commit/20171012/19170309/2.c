#include<stdio.h>
int main()
{
int x,n;
x=0,n=1;
while(n<100)
{
x=n*(n+1)*(n+2)+x;
n=n+3;
}
printf("The result is:%d\n", x);
return 0;
}
