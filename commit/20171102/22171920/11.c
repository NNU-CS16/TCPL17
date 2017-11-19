#include<stdio.h>
void reverse(char *str)
{
    if (NULL == str)  
    ;  
    char *p = str;  
    char *q = str;  
    char temp;  
    while (*q != '\0')  
    {  
        q++;  
    }  
    q--;  
      
    while (q > p)  
    {  
        temp = *p;  
        *p = *q;  
        *q = temp;  
        p++;  
        q--;  
    }    
    
}
int main()
{
    char str[100];
    scanf("%s",str);
    reverse(str);
    printf("%s\n",str);
    return 0;
}
