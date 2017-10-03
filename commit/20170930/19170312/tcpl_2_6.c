#include<stdio.h>  
    unsigned setbits(unsigned x, int p, int n, unsigned y)  
{  
    return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);  
}  
    int main()
{  
    unsigned int x=73;  
    unsigned int y=23;  
    int p=5;  
    int n=3;  
    int r;  
    r=setbits(x, p, n, y);  
    printf("%d\n", r);
    return 0;  
}
