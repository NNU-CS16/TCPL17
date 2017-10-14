#include<stdio.h>
#include<math.h>
int main() 
{
    int x,a,b,c,y,z;
    printf("Please input x,a,b,c:\n"); 
    scanf("%d,%d,%d,%d",&x,&a,&b,&c); 
    
        y=sqrt(fabs(x)); 
        z=(4*a)/(b*c);
    if(y!=z) 
        printf("%d",1);
    else
        printf("%d",0);

    return 0;
} 
