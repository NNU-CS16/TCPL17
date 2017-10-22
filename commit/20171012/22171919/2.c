#include <stdio.h>
int main()
{
int a=1,b,c=0;
for(a=1;a<=97;a+=3)
{
b=a*(a+1)*(a+2);
c+=b;
}
printf("%d\n",c);
return 0;
}
