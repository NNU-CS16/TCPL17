#include<stdio.h>
#define a (2*i*i-1)     
#define y  (2*i-1)
void output1(int i,char c);         
void output2(int i,char c);        
int  main()
{
    int N,value,i=1;
    char c;
    scanf("%d %c",&N,&c); 
    while(N>=a)    {
        i++;
    }
    i--;          
    value=N-a;           
    output1(i,c);
    
    printf("%d\n",value);   
    return 0;
}
void output1(int i,char c)
{
    int j=i;
    int s,x;                 
    if(i==1)    {
        printf("%c\n",c);       
        return ;
    }
    else    for(x=1;x<=y;x++)    {            
      
                printf("%c",c);
                if(i==1) break;
                if(x==y)    {
                    printf("\n");
                    x=0;                  
                    i--;
                    if(j!=i)    {                
                        for(s=1;s<=j-i;s++)
                            printf(" ");
                    }
                }    
                
            }
    printf("\n");    
    output2(j,c);   
    
}
void output2(int i,char c)
{
    int j=i;
    int s,x;
    int z=2;                
    for(x=2*z-1;x>=1;x--)    {           
        
        if(x==2*z-1)    {                 
            if(j!=z)    {
                for(s=1;s<=j-z;s++)            
                    printf(" ");    
            }
        }
        printf("%c",c);            
        if(x==1)    {            
            printf("\n");
            z++;                        
            x=2*z;  
        }
        if(z>i)    break;  
    }
}
