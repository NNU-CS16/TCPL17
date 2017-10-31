#include <stdio.h>  
int GCD(int n,int m);
{     
int rem;  
while(m)
{  
rem=n%m;  
n=m;  
m=rem;  
}  
return n;  
}  
int main() 
{  
int n,m;  
scanf("%d%d",&n,&m);  
int data[n];  
for(int i=0; i< n;++i)  
scanf("%d",&data[i]);  
int pass = GCD(n, m);           
int times = n / pass;              
for(int i=0; i<pass;++i) 
{  
int tmp = data[(i+times*m)%n];  
for(int j=times - 1; j>0;--j)   
data[(i+j * m + m) % n]= data[(i+j * m)%n];  
data[(i+times*m+m)%n]=tmp;  
}  

for(int i=0;i<n;++i) 
{  
if(i)  
printf(" ");  
printf("%d",data[i]);  
}  
return 0;  
}    
