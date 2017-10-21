#include<stdio.h>
int main()
{
 int n,s;
 s=0;
 for(n=1;n<=97;n=n+3)
    s=s+n*(n+1)*(n+2);
 printf("%d",s);
 return 0;
}













