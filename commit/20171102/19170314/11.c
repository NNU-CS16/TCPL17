#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
     int len;
     len=strlen(str);
     int i=0; 
     char a[1000]; 
     strcpy(a,str);   
     for(i=0;i<=len-1;i++)
     {
     str[i]=a[len-i-1];
     }




}
int main()
{
     char s[1000];
     
     scanf("%s",s);
     reverse(s);
     printf("%s",s); 
      return 0;
} 




