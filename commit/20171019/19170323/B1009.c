#include<stdio.h>  
#include<string.h>      
int main()  
{  
 char s[81]={};  
 scanf("%[^\n]",s);  
 if(strchr(s,' ')==NULL)  

 {  
  printf("%s\n",s);  
 }  
  else  
 {  
  while(strrchr(s,' ')!=NULL)  
  {  
   printf("%s ", strrchr(s,' ')+sizeof(char));  
// 注意要加 sizeof(char)  
    *strrchr(s,' ')=0;     
  }
   
   printf("%s",s);  
 }  
   printf("\n");

   return 0;  
}  

