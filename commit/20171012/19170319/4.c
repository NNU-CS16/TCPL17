#include<stdio.h>
int main()
{
 int n,i,a,s;
 s=0;
 for(i=1;i<=10;++i)
    {
     a=1;
     for(n=1;n<=i;++n)
       a*=n;
    s+=a;
    }
 printf("%d",s);
 return 0;
}
