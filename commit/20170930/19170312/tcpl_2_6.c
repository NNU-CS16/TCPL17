#include<stdio.h>  
    unsigned setbits(unsigned x, int p, int n, unsigned y)  
{  
    return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);  
}  
    int main()
{  
    unsigned int x;  
    unsigned int y;  
    int p;  
    int n;  
    int r;
    printf("Please enter the number of x,y,p,n.\n");
    scanf("%u%u%d%d",&x,&y,&p,&n);
    r=setbits(x, p, n, y);  
    printf("%d\n", r);
    return 0;  
}
