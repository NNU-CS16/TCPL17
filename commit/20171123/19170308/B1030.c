    #include <iostream>  
    #include <cstring>  
    #include <stdio.h>  
    #include <algorithm>  
    using namespace std;  
      
    int main()  
    {  
        long long n,max=0;  
        double p;  
        cin>>n>>p;  
        double a[n];  
        for(int i=0;i<n;i++)  
        {  
            cin>>a[i];  
        }  
        sort(a,a+n);  
        for(int i=0;i<n;i++)  
        {  
            for(int j=i+max-1;j<n;j++)  
            {  
                if(a[i]*p<a[j])  
                    break;  
                if(j-i+1>max)  
                    max=j-i+1;  
            }  
        }  
        cout<<max<<endl;  
        return 0;  
    }  
