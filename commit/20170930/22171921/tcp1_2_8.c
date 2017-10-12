#include<stdio.h>
unsigned rightrot(unsigned x,int n)
{
while (n>0) {
if ((x&1)==1)
x=(x>>1)|~(~0U>>1);
else
x=(x>>1);
n--;
}
return x;
}
int main(void)
{
unsigned x=3;
int n;
for(n = 1;n<8;n++)
printf("%u,%d:%u\n",x,n,rightrot(x,n));
return 0;
}
