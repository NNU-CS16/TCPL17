#include <sudio.h>
unsigned rightrot(unsigned int x,int n)
{
unsigned int a;unsigned int b;
a=x<<(16-n);
b=x>>n;
b=b|a;
return b;
}
int main()
{
unsigned int x,n;
printf("x=");
scanf("%d",&x);
printf("n=");
scanf("%d",&n);
printf("%d\n",rightrot(x,n));
return 0;
}
