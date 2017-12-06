    #include <iostream>  
    #include <algorithm>  
    using namespace std;  
    void InsSort(int *a,int k)   
    {  
        int j,temp;  
        temp=a[k];  
        for(j=k-1;j>=0;j--)  
            if(a[j]>temp)  
                a[j+1]=a[j];  
            else  
                break;  
        a[j+1]=temp;  
    }  
    void Merge(int *a,int k,int len)      
    {  
        if(k>len)  
            k=len;  
        for(int i=0; i<len/k ;i++ )       
            sort(a+i*k,a+(i+1)*k);  
        for(int i=k*(len/k);i<len; )      
            {  
                sort(a+i,a+len);  
                break;                   
            }  
    }  
    bool Compare(int *a,int *b,int len)    
    {  
        for(int i=0;i<len;i++)  
            if(a[i]!=b[i])  
                return false;  
        return true;  
    }  
      
    int main()  
    {  
        int N;  
        cin>>N;  
        int *A=new int [N];          
        int *target=new int [N];    
        int *C=new int [N];         
        for(int i=0;i<N;i++)  
            cin>>A[i];  
        for(int i=0;i<N;i++)  
            cin>>target[i];  
        for(int i=0;i<N;i++)  
            C[i]=A[i];  
        for(int i=1;i<N;i++)        
        {  
            InsSort(A,i);  
            if(Compare(A,target,N))  
            {  
                cout<<"Insertion Sort"<<endl;  
                InsSort(A,i+1);   
                cout<<A[0];  
                for(int i=1;i<N;i++)  
                    cout<<" "<<A[i];  
                return 0;  
            }  
        }  
        for(int i=0;i<N;i++)     
            A[i]=C[i];  
        for(int i=2;i<=N;i*=2)  
        {  
            Merge(A,i,N);  
            if(Compare(A,target,N))  
            {  
                cout<<"Merge Sort"<<endl;  
                Merge(A,2*i,N);  
                cout<<A[0];  
                for(int i=1;i<N;i++)  
                    cout<<" "<<A[i];  
      
            }  
        }  
        return 0;  
    }  
