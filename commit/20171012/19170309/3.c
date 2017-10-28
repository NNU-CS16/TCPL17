#include<stdio.h>
int main()
{
int x,a,b,c,n;
x=0;b=0;c=a;
scanf("%d,%d", &a,&n);
while(b<=n)
{
x=x+c;
c=10*c+a;
b=b+1;
}
printf("The result is:%d\n", x);
return 0;
}


