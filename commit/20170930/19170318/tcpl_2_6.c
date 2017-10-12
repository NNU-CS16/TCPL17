#include <stdio.h>  
  
unsigned setbits(unsigned x, int p, int n, unsigned y)  
{  
    
    return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);  

}  
  
  
int main()  
{  
    
    unsigned x = 73,y = 23;  
    int p = 5,n = 3,r;  
    
    r = setbits(x, p, n, y);  
    printf("%d\n", r);
    
    return 0; 
 
}
