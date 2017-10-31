#include<stdio.h>
#include<math.h>
int main()
{
  long long int a,b,c,d,e;
  printf("a,b,c=\n");
  scanf("%lld%lld%lld",&a,&b,&c);
  d=pow(a,b);
  e=d%c;
  printf("the answer is %lld",e);
 return 0;
}
