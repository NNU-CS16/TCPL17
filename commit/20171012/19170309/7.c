#include<stdio.h>
int main()
{

int a,b,c,n;
scanf("%d",&n);
if(n>=100)
{
a=n/100;
b=(n-a*100)/10;
c=n%10;
printf("%d%d%d\n", c,b,a);
}
else if(n>=10)
{
a=n/10;
b=n%10;
printf("%d%d\n", b,a);
}
else
printf("%d\n", n);

return 0;
}   
