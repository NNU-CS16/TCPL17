#include <iostream>    
#include <cstdio>    
using namespace std;
int n,c,a[22],i,j;    
int main()    
{    
    cin>>n;    
    a[1]=2;                
    for(i=2;i<=n;i++)        
    {    
       c=0;                     
       for(j=1;j<=20;j++)        
       {    
            a[j]=a[j]*2+c;        
            if(j==1)   
            a[j]+=2;      
            c=a[j]/10000;         
            a[j]%=10000;          
       }    
    }    
    i=20;    
    while(i>1&&!a[i])   
    i--;     
    cout<<a[i];                   
    while(--i)    
    printf("%04d",a[i]);     
    cout<<endl;    
    return 0;    
}    



