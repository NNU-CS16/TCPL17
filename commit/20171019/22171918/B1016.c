#include <stdio.h>  
int main()
{  
   int i,j,m,n;  
   int p=0,q=0;
   scanf("%d %d %d %d",&i,&j,&m,&n);  
   while(i) 
   {  
    if (i%10==j)
        p=p*10+j;  
        i/=10;  
   }  
   while(m) 
   {  
    if (m%10==n)  
        q=q*10+n;   
        m/=10;  
   }  
   printf("%d\n",p+q);   
  return 0;  
}  
