#include<iostream>
#include<vector>
int main()
{  
    int i;  
    for(i=0;i<k;i++)  
    { 
        int a;
        int n; 
        int temp;  
        int j=-1;  
        temp=a[0];  
        for(j=1;j<n;j++)  
            a[j-1]=a[j];  
        a[j-1]=temp;  
    }  
}  
