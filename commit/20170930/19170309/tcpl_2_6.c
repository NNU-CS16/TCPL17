#include<stdio.h>

int main()
{
int n=3,p=3,a;
int x = 18,y=91;
a = (x&~(~(~0<<n)<<p)) | ((y<<p)& ~(~0<<n)<<p);
printf("%d\n", a);
return 0;
}






