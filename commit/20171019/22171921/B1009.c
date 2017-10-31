#include<stdio.h>  
#include<string.h>  
int main()
{  
    char n[100][100],m;  
    int i=0;  
    do
    {  
    scanf("%s",n[i]);  
    m=getchar();  
    i++;  
    }
    while(m!='\n');  
    for (int j=i-1;j>=0;--j) 
    {  
    printf("%s",n[j]);    
    if(j!=0)
    {  
    printf(" ");  
    }  
    }  
    printf("\n");
    return 0;  
}  

