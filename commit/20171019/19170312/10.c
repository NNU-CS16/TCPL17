#include<stdio.h>
int main()
{
 long int a,b,c,d=1,i,mod;
 scanf("%ld%ld%ld",&a,&b,&c);
 for(i=1;i<=b;i++)
 d=d*a;
 mod=d%c;
 printf("%ld\n",mod);
 return 0;
}
