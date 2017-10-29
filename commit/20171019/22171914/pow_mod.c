#include <stdio.h>  

  
int (EOF)
int64 power(int64 a,int64 b,int64 c)  
    {  
        __int64 ans=1;  
        while(b)  
        {  
            if(b&1)    
            {  
                ans=(ans*a)%c;
                b--;  
            }  
            b/=2; 
            a=a*a%c;
        }  
        return ans;  
          
    }  
    int main()  
    {  
        long  a,b,c;  
        while(scanf("%ld%ld%ld",&a,&b,&c)!=EOF)  
        {  
          
            printf("%ld\n", power(a,b,c));  
        }  
        return 0;  
}
















