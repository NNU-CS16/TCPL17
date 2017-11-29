#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    int c[500]; 
    scanf("%s%s",a,b);
    int i,j,k=0,r=0;
    int lena,lenb;
    lena = strlen(a);
    lenb = strlen(b);
    for(i=lena-1,j=lenb-1;i>=0&&j>=0;i--,j--)
    {  
        int p=(a[i]-'0')+(b[j]-'0')+r;    
        r=p/10;  
        c[k++]=p%10;  
    }
    while(i>=0)
    {    
        int p=(a[i]-'0')+r;  
        r=p/10;  
        c[k++]=p%10;  
        i--;  
    }  
    while(j>=0)
    {     
        int p=(b[j]-'0')+r;  
        r=p/10;  
        c[k++]=p%10;  
        j--;  
    }  
    if(r)
    {
        c[k++]=r;  
    }  
    for(int i=k-1;i>=0;i--)
    { 
        printf("%d",c[i]);
    }
    return 0;
}
