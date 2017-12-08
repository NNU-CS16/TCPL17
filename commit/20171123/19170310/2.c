#include<stdio.h>  
int binInsert(int n,int m,int j,int i)  
{  
    int u = 0,k;  
    for(k = j; k <= i;k++)  
    {  
        int temp = ((m >> u)&1);
        n |=( temp << k );  
        u++;  
    }  
   return n;  
}  
int main()  
{  
  
    //cout << binInsert(1024,19,6,2) << endl;  
    cout << binInsert(4355,4,2,7) << endl;  
   cout << "hello..."<<endl;  
    return 0; 
}
