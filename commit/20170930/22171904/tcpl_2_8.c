#include<stdio.h>
unsigned rightrot(unsigned int x,int n)
{
unsigned int y;unsigned int z;
y=x<<(16-n);
z=x>>n;
z=z|y;
return z;
}
int main()
{
unsigned int x ,n;
printf("x=");
scanf("%d",&x);
printf("n=");
scanf("%d",&n);
printf("%d\n",rightrot(x,n));
return 0;
} 
