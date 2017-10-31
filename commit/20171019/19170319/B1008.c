    #include<stdio.h>  
      
    int main()  
    {  
        int n,m,a[105],i,j = -1;  
        scanf("%d %d",&n,&m);  
        m = m % n;  
        for(i=0;i<n;i++)  
        {  
            scanf("%d",&a[i]);    
        }  
        for(i=0;i<n;i++)  
        {  
            if(j==-1)  
            {  
                if(m==0)  
                j = 0;  
                else  
                j = n - m;    
            }  
            printf("%d",a[j]);  
            if(j<n-1)  
                j++;  
            else  
                j = 0;  
            if(i!=n-1)  
                printf(" ");  
        }  
        printf("\n");  
     return 0;   
    }   
