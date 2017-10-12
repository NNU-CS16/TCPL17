#include <stdio.h>
int main()
{
int a,b,z,v;
scanf("%d%d",&a,&b);
printf("a=%d,b=%d\n",a,b);

z=a;
v=b;

a=v;
b=z;

printf("a=%d,b=%d\n",a,b);
return 0;
}
