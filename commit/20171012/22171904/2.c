#include<stdio.h>
int main()
{
 int n=1, b=6,c;
while
 (n<95)
{
n+=3;
c=n*(n+1)*(n+2);
b=b+c;
}
printf("%d\n",b);
return 0;
}
