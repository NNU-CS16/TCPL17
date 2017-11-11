#include<stdio.h>
void reverse(char*str) 
{ 
   int len = strlen(str); 
   printf("%s\n", str); 
   for (int i=0;i<len/2;i++) 
   { 
      char ch=str[i]; 
      str[i]=str[len-1-i]; 
      str[len-1-i]=ch; 
   } 
   printf("%s\n",str); 
} 
