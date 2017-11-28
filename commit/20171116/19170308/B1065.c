   #include<iostream>  
    #include<string>  
    #include<algorithm>  
    #include<stdio.h>//freopen  
    #include<string.h>//memset  
    using namespace std;  
      
      
      
      
    int couple[100001];  
    bool dog[100001];  
    bool At[100001];  
    int CCout(int i)  
    {  
      
        string a="00000";  
        int n=4;  
        while(i)  
        {  
            a[n]=i%10+'0';  
            i=i/10;  
            n--;  
      
        }  
        cout<<a;  
        return 0;  
    }  
    int main()  
    {  
        memset(couple,-1,10001*sizeof(int));  
        int dogs=0;  
        freopen("123.txt","r",stdin);  
        int n;  
        cin>>n;  
      
        int man,woman;  
        if(n<=0&&n>50000)return 0;  
        for(int i=0;i<n;i++)  
        {  
            cin>>man>>woman;  
            couple[man]=woman;  
            couple[woman]=man;  
        }  
        cin>>n;  
        if(n<=0&&n>10000)return 0;  
        int in;  
        for(int i=0;i<n;i++)  
        {  
            cin>>in;  
            At[in]=1;  
        }  
        for(int i=0;i<100001;i++)  
        {  
            if(At[i])  
            {  
      
                if(couple[i]!=-1)  
                {  
                    if(!(At[couple[i]]))  
                        {dog[i]=1;dogs++;}  
                }  
                else  
                    {  
                        dog[i]=1;  
                        dogs++;  
                    }  
            }  
        }  
        int t=0;  
        cout<<dogs<<endl;  
        for(int i=0;i<100001;i++)  
        {  
      
            if(dog[i]&&t)  
            {  
                cout<<" ";printf("%05d",i);  
            }  
            else if(dog[i])  
            {printf("%05d",i);t++;}  
        }  
        return 0;  
    }  








