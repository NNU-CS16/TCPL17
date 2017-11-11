#include <stdio.h>
int is_pow2(int n);
int main()
{
   int a,flag;
   scanf("%d",&a);
   flag= is_pow2(a);
   if(flag==0)
   printf("yes");
   if(flag==-1)
   printf("no");
   return 0;
}
int is_pow2(int n)
{
    int b,c;
    c=n&(n-1);
    if(c==0)
    b=0;
    else b=-1;
    return b;
}
