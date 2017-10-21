#include <stdio.h>
{
unsigned invert (unsigned x,int p,int n)

return x^((x>>(p+1-n))&~(~0<<n));

int main()

printf("x=");
scanf("%d",&x);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
printf("%d\n",invert(x,p,n));

return 0;
}
