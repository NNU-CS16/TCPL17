#include<stdio.h>  
int main()  
{  
    int A,B,D;  
    int sum,i=0,j;  
    int result[100];  
    scanf("%d %d %d",&A,&B,&D);  
    sum=A+B;  
    while(sum)  
    {  
        result[i++]=sum%D;  
        sum=sum/D;  
    }  
    for(j=i-1;j>=0;j--)  
        printf("%d",result[j]);  
    if(i==0) printf("0");  
    return 0;  
}  
