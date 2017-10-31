#include <stdio.h>  
int main() {  
    int a,b,c,d;  
    scanf("%d%d%d%d",&a,&c,&b,&d);  
    int Pa=0,Pb=0;  
    while(a) 
    {  
        if (a%10==c)
        Pa=Pa*10+c;  
        a/=10;  
    }  
    while (b) 
    {  
     if (b%10==d)  
     Pb=Pb*10+d;   
     b/=10;  
    }  
    printf("%d\n",Pa+Pb);   
    return 0;  
}  
