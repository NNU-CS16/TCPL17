#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
    int i = 0;  
    assert(str1 != NULL && str2 != NULL);    
    while(str1[i] != '\0' && str2[i] != '\0')  
    {  
        if (str1[i]<str2[i])  
        {  
            return -1;  
        }  
        else if(str1[i]>str2[i])  
        {  
            return 1;  
        }  
        i++;  
    }  
    if (i <strlen(str1))  
    {  
        return 1;  
    }  
    else if (i < strlen(str2))  
    {  
        return -1;  
    }  
    else  
    {  
        return 0;  
    }  
}  

int main()
{
    char str1[100], str2[100];
    scanf("%[^\n]", str1);
    scanf("%[^\n]", str2);
    printf("%d\n", my_strcmp(str1, str2));
    return 0;
}
