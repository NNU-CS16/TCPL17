#include <stdio.h>
int is_int_pal(int n);
int main()
{
   int a;
   scanf("%d",&a);
   is_int_pal(a);
   return 0;
}
int is_int_pal(int n)
{
    int c,sum=0;
    c=n;
    while(n>0)
    {
     sum=sum*10+n%10;
     n=n/10;
    }
    if(sum==c)
    printf("yes");
    else printf("no");

    return 0;
}
