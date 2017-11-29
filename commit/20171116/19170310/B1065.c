#include<iostream>  
#include<string>  
#include <algorithm>   
#include<iomanip>  
using namespace std;  
int main()  
{  
    int n,m; 
      cin>>n;  
      int id[50000][2]={};    
      int couples=0;    
      for(int i=0;i<n;i++)    
      {   
            do  
            {  
                  cin>>id[i][0]>>id[i][1];  
            }
        while(getchar()!='\n');  
      }  
       cin>>m;  
      int *peopleid=new int [m];    
      for(int i=0;i<m;i++)  
            cin>>peopleid[i];   
      for(int i=0;i<n;i++)   
      {  
            if((*find(peopleid,peopleid+m,id[i][0])==id[i][0])&&(*find(peopleid,peopleid+m,id[i][1])==id[i][1]))  
        {  
                 couples++;  
                *find(peopleid,peopleid+m,id[i][0])=1000000;     
                 *find(peopleid,peopleid+m,id[i][1])=1000000;          
        }  
}  
      sort(peopleid,peopleid+m);     
      cout<<m-couples*2<<endl;
      if(m-couples*2!=0)  
      {  
            cout<<setiosflags(ios::right)<<setfill('0')<<setw(5)<<peopleid[0];     
            for(int i=1;i<m;i++)  
            {  
                if(peopleid[i]!=1000000)  
                      cout<<' '<<setw(5)<<peopleid[i];  
                else  
                      break;  
                  
             }  
          }  
      delete [] peopleid;  
    return 0;  
}  
