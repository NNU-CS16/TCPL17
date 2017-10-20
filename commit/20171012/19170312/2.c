#include <stdio.h>
int main()
{
int i,n,s;
for(n=3,s=0;n<=99;n=n+3)
 {
  i=(n-2)*(n-1)*(n);
  s=s+i;
 }
printf("1*2*3+4*5*6+...+97*98*99=%d\n",s);
return 0;
}
