#include<stdio.h>
int main( )
{
int sum,n,a,b,c;
sum=0,a=1,b=2,c=3,n=a*b*c;
while(n<=97*98*99)
{
a++;
b++;
c++;
sum=sum+n;
n=a*b*c;
}
printf("1*2*3+4*5*6+...+97*98*99=%d\n",sum);
return 0;
}
