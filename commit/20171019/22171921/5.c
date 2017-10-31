#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    char i;  
    char j=' ';  
    int m;  
    int n;  
    m = 0;  
    n = 0;  
    while((i=getchar())!='.')
    {  
    if(i!=' ') m++;  
    else if(m!=0)
    { 
    if(n!=0) 
    putchar(j);   
    n = 1;  
    printf("%d",m);  
    m = 0;  
    }
    else
    {  
    continue;  
    }  
    }  
    if(n==1&&m!=0) 
    putchar(j);  
    if (m) 
    printf("%d\n",m);  
    return 0;  
} 
