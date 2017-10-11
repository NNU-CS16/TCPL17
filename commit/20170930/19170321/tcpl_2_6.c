#include<stdio.h>

int main()
{
    int n=3,p=5,x=73,y=23,a;
    a=x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);  
    printf("%d\n",a);

    return 0;
}
