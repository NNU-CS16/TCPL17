#include <stdio.h>  
int main()  
{  
    int x,y,z,a,b;  
    char c;  
    scanf("%d%c%d",&x,&c,&y);  
    a=x;  
    b=y;  
      
    while(b!=0)
       {  
        z=a%b;  
        a=b;  
        b=z;  
        }  
    x/=a;  
    y/=a;  
    printf("%d/%d\n",x,y);  
    return 0;  
}   
