#include<stdio.h>  
int main()
{    
    int j[200]; 
    int n,m,i;  
    scanf("%d%d",&n,&m);  
    m=m%n;  
    for (i=0;i<n;i++)
    {  
    scanf("%d",&j[i]);  
    j[i+n]=j[i]; 
    }  
    for (i=0;i<n;i++)
    {  
    j[i]=j[i+n-m];  
    }  
    for (i=0;i<n;i++)
    {  
    if (i==n-1)
    printf("%d\n",j[i]);  
    else   
    printf("%d",j[i]);            
    }  
    return 0;  
}  


