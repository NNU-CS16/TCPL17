 #include <stdio.h>  
    int main()  
    {  
        int x1,x2,temp,a,b;  
        char c;  
        scanf("%d%c%d",&x1,&c,&x2);  
        a=x1;  
        b=x2;  
          
        while(b!=0){  
            temp=a%b;  
            a=b;  
            b=temp;  
            }  
        x1/=a;  
        x2/=a;  
        printf("%d/%d",x1,x2);  
        return 0;  
} 
