#include<stdio.h>  
#include<string.h>
  
  
int main()  
{  
    char s[81]={};  
    fgets(s,81,stdin); 
    if(strrchr(s,' ')==NULL)  
      {  
         printf("%s\n",s);  
      }  
    else  
      {  
         while(strrchr(s,' ')!=NULL)  
              {  
                  printf("%s ", strrchr(s,' ')+sizeof(char));  
 
                  *strrchr(s,' ')=0;  
   
              }  
                  printf("%s",s);  

      }  
}
