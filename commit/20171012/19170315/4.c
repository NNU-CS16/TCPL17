#include <stdio.h>

int main()
{
int n, x=1 , sum=0;

for(n=1;n<=10;n++)
 {
  x*=n;
  sum+=x;
 }

printf("sum=%d",sum);
return 0;
}

