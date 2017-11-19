#include <iostream>  
      
using namespace std;  
  
int main()  
{  
    int n,k;  
    cin>>n>>k;  
   
    int *result = new int[n];   
    
    for(int i=1;i<=n;i++)  
    {  
        result[i] = 1;  
        for(int j=i-1;j>=1;j--)  
        {  
             result[j] = result[j-1]+result[j];  
        }  
        result[0] = 1;  
    }  
      
    cout<<result[k]<<endl;  
   
    return 0;  
}  
