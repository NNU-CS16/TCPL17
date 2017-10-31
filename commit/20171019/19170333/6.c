#include<stdio.h>

int main()
{
    int a,b,c,n;
    printf("input int :");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a==b) printf("c"); 
    if(b==c) printf("a"); 
    if(a==c) printf("b"); 
    printf("\n");
    
    return 0;
    
}
