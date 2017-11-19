#include<stdio.h> 
int is_int_pal(int n); 
{ 
int m,y=0,i;   
m=x; 
 while(m>0)  
 { 
i=m%10; 
 y=y*10+i; 
 m=m/10;   
 }  
 if(y==x) 
     return 1; 
 else  
     return 0;  
}  
int main() 
{ 
int x; 
 scanf("%d",&x); 
 
if(is_int_pal(x)) 
 printf("%d is huiwen!\n",x);  
 else 
 printf("%d isn't huiwen!\n",x);  
return 0;
}  
