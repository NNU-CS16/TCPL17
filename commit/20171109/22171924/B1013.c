#include<stdio.h>  
#include<math.h>   
int prime[100000+2],a[2000000+10];  
int main()  
{   
    int cnt=0,i,j;  
    for(i=2;i<=200000+1;i++)  
    {  
        if(!a[i])  
            prime[cnt++]=i;  
        for(j=i*2;j<=200000+1;j+=i)  
        {  
            a[j]=1;  
        }  
    }  
    int a,b;  
    scanf("%d%d",&a,&b);  
    int cou=0;  
    for(i=a-1;i<b;i++)  
    {  
        if(cou%10==0)  
            printf("%d",prime[i]);  
        else  
            printf(" %d",prime[i]);  
        cou++;  
        if(cou%10==0)  
            printf("\n");  
    }  
    return 0;  
}  
