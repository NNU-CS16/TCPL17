#include<stdio.h>
int main()
{
int s,x;
for(s=0,x=1;x<98;x+=3)
s=s+x*(x+1)*(x+2);
printf("%d\n",s);
return 0;
}
