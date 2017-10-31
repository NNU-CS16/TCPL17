#include <stdio.h>
#include <math.h>
int main()
{
 long int a,b,c,d,mod;
 printf("Please iuput the number of a,b,c:");
 scanf("%ld%ld%ld",&a,&b,&c);
 d=pow(a,b);
 mod=d%c;
 printf("%ld ",d);
 printf("%ld\n",mod);
 return 0;
}

