#include <stdio.h>
int main()
{
int x,y=0;
for(x=2;x<=100;x+=2)
{
y+=x;
}
printf("y=%d\n",y);
return 0;
}
