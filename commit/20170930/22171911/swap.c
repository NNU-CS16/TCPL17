#include <stdio.h>

int main( )
{
 int a,b;
 scanf("%d%d",&a,&b);
printf("%d,%d\n",a,b);
 a=a^b;
b=b^a;
a=a^b;
 printf("a=%d\n,b=%d\n",a,b);
 return 0;
}
