#include <stdio.h>
int main()
{
  int sum,n,a,b; 
  sum=0;
  for(n=1,a=2,b=3;n<=97;n+=3,a+=3,b+=3)
  sum=sum+n*a*b;
 printf("sum=%d\n",sum);
 return 0;
}
