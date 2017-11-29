#include <stdio.h>  
int strcmp(const char *str1, const char *str2)  
{  
    while(str1 != NULL&&str2 != NULL)  
    {  
        while(*str1++ == *str2++)  
        {  
            if(*str1 == '\0'&&*str2 == '\0') 
                return 1;  
        }  
          
        return -1; 
    }  
  
    return -2; 
}  
  
int main()  
{  
    char *st1="abdefg";  
    char *st2="abcdefg";  
    printf("%d\n", strcmp(st1,st2));  
  
    return 0;  
}  
