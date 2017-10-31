    #include<stdio.h>  
    #include<math.h>  
    int main()  
    {  
        int n,m,i,j,t;  
        char a;  
        scanf("%d %c",&n,&a);  
        n-=1;  
        m=1;  
        while(n-2*(m+2)>=0)  
        {  
            m+=2;  
            n-=2*m;  
              
        }  
        t=m/2;  
        for(i=0;i<m;++i)  
        {  
            for(j=0;j<t-abs(i-t);++j)  
                printf(" ");  
            for(j=0;j<abs(i-t)*2+1;++j)  
                printf("%c",a);  
            printf("\n");  
        }  
        printf("%d\n",n);  
          
        return 0;  
    }  



