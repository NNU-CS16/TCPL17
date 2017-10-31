#include <stdio.h> 
int main() 
{  
   char c,f=1;  
   int count = 0;  
   scanf("%c",&c);    
 while(c != '.')  
{   
    if(c == ' ')
{    
       if(count != 0)
{    
          if(f==1)    
{      
   printf("%d",count);f=0;   
}   
else 
   printf(" %d",count); 
   count = 0;   
} 
} 
else
   count++;  
   scanf("%c",&c); 
}
    if(count!= 0)
{  
        if(f==1)   
         printf("%d",count); 
        else 
        printf(" %d",count);  
}  
 return 0; 
} 

