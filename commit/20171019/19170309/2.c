#include<stdio.h>
int main()
{

long long int a,b,c;
int n,x=1;
scanf("%lld %lld %lld", &a,&b,&c);

for(n=1;n<=b;n++)
   x=a*x;
printf("%lld\n", x%c);
return 0;
}
      
