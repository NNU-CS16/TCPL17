#include<stdio.h>
#include<math.h>
int main()
{
  long long int a, b, c, d;
  int s;
  printf("輸入a=\n b=\n c=\n ");
  scanf("%lld%lld%lld",&a,&b,&c);
 d=pow(a,b);
 s=d%c;
 printf("s=%d\n",s);
return 0;
}

