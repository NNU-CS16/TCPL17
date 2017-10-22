#include <stdio.h> 
int main() 
{ 
    int x,n,a;
    scanf("%d",&x);  
    a=x%16;
    n=x/16*10+a;  
    printf("%d\n",n);
    return 0;
}
